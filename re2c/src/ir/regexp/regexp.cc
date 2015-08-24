#include "src/ir/regexp/encoding/case.h"
#include "src/ir/regexp/encoding/utf16/utf16_regexp.h"
#include "src/ir/regexp/encoding/utf8/utf8_regexp.h"
#include "src/ir/regexp/regexp.h"
#include "src/ir/regexp/regexp_alt.h"
#include "src/ir/regexp/regexp_cat.h"
#include "src/ir/regexp/regexp_close.h"
#include "src/ir/regexp/regexp_match.h"
#include "src/ir/regexp/regexp_null.h"
#include "src/parse/scanner.h"
#include "src/util/range.h"

namespace re2c
{

static MatchOp * merge (MatchOp * m1, MatchOp * m2);

free_list<RegExp*> RegExp::vFreeList;

RegExp * doAlt (RegExp * e1, RegExp * e2)
{
	if (!e1)
	{
		return e2;
	}
	if (!e2)
	{
		return e1;
	}
	return new AltOp (e1, e2);
}

RegExp * mkAlt (RegExp * e1, RegExp * e2)
{
	AltOp * a;
	MatchOp * m1;
	MatchOp * m2;

	a = dynamic_cast<AltOp*> (e1);
	if (a != NULL)
	{
		m1 = dynamic_cast<MatchOp*> (a->exp1);
		if (m1 != NULL)
		{
			m1->ins_access = e1->ins_access;
			a->exp2->ins_access = e1->ins_access;
			e1 = a->exp2;
		}
	}
	else
	{
		m1 = dynamic_cast<MatchOp*> (e1);
		if (m1 != NULL)
		{
			e1 = NULL;
		}
	}
	a = dynamic_cast<AltOp*> (e2);
	if (a != NULL)
	{
		m2 = dynamic_cast<MatchOp*> (a->exp1);
		if (m2 != NULL)
		{
			m2->ins_access = e2->ins_access;
			a->exp2->ins_access = e2->ins_access;
			e2 = a->exp2;
		}
	}
	else
	{
		m2 = dynamic_cast<MatchOp*> (e2);
		if (m2 != NULL)
		{
			e2 = NULL;
		}
	}

	return doAlt (merge (m1, m2), doAlt (e1, e2));
}

MatchOp * merge (MatchOp * m1, MatchOp * m2)
{
	if (!m1)
	{
		return m2;
	}
	if (!m2)
	{
		return m1;
	}
	MatchOp * m = new MatchOp (Range::add (m1->match, m2->match));
	if (m1->ins_access == RegExp::PRIVATE
		|| m2->ins_access == RegExp::PRIVATE)
	{
		m->ins_access = RegExp::PRIVATE;
	}
	return m;
}

RegExp * doCat (RegExp * e1, RegExp * e2)
{
	if (!e1)
	{
		return e2;
	}
	if (!e2)
	{
		return e1;
	}
	return new CatOp (e1, e2);
}

RegExp * Scanner::matchSymbol(uint32_t c) const
{
	if (!encoding.encode(c))
		fatalf("Bad code point: '0x%X'", c);

	switch (encoding.type ())
	{
		case Enc::UTF16: return UTF16Symbol(c);
		case Enc::UTF8:  return UTF8Symbol(c);
		default:         return new MatchOp (Range::sym (c));
	}
}

RegExp * Scanner::matchSymbolRange(Range * r) const
{
	if (!r)
	{
		switch (empty_class_policy)
		{
			case EMPTY_CLASS_MATCH_EMPTY:
				warn.empty_class (get_line ());
				return new NullOp;
			case EMPTY_CLASS_MATCH_NONE:
				warn.empty_class (get_line ());
				break;
			case EMPTY_CLASS_ERROR:
				fatal ("empty character class");
				break;
		}
	}

	switch (encoding.type ())
	{
		case Enc::UTF16: return UTF16Range(r);
		case Enc::UTF8:  return UTF8Range(r);
		default:         return new MatchOp(r);
	}
}

RegExp * Scanner::cpoint_string (const std::vector<uint32_t> & cs, bool case_insensitive) const
{
	RegExp * r = NULL;
	const size_t count = cs.size ();
	for (size_t i = 0; i < count; ++i)
	{
		const uint32_t c = cs[i];
		if (case_insensitive && is_alpha (c))
		{
			RegExp * rl = matchSymbol (to_lower_unsafe (c));
			RegExp * ru = matchSymbol (to_upper_unsafe (c));
			r = doCat (r, mkAlt (rl, ru));
		}
		else
		{
			r = doCat (r, matchSymbol (c));
		}
	}
	return r ? r : new NullOp;
}

RegExp * Scanner::cpoint_class (const std::vector<uint32_t> & cs, bool neg) const
{
	Range * r = NULL;
	const size_t count = cs.size ();
	for (size_t i = 0; i < count; ++i)
	{
		uint32_t l = cs[i];
		uint32_t u = count - i >= 3 && cs[i + 1] == '-'
			? cs[i += 2]
			: l;
		if (l > u)
		{
			warn.swapped_range (get_line (), l, u);
			std::swap (l, u);
		}
		Range * s = encoding.encodeRange (l, u);
		if (!s)
		{
			fatalf ("Bad code point range: '0x%X - 0x%X'", l, u);
		}
		r = Range::add (r, s);
	}
	if (neg)
	{
		r = Range::sub (encoding.fullRange (), r);
	}
	return matchSymbolRange (r);
}

std::string * Scanner::cpoint_conf (const std::vector<uint32_t> & cs) const
{
	const size_t n = cs.size ();
	std::string * s = new std::string;
	for (size_t i = 0; i < n; ++i)
	{
		const uint32_t c = cs[i];
		if (c > 0xFF)
		{
			fatalf ("multibyte character in configuration string: 0x%X", c);
		}
		else
		{
			*s += static_cast<char> (c);
		}
	}
	return s;
}

RegExp * Scanner::mkDiff (RegExp * e1, RegExp * e2) const
{
	MatchOp * m1 = dynamic_cast<MatchOp *> (e1);
	MatchOp * m2 = dynamic_cast<MatchOp *> (e2);
	if (m1 == NULL || m2 == NULL)
	{
		fatal("can only difference char sets");
	}
	Range * r = Range::sub (m1->match, m2->match);

	return matchSymbolRange (r);
}

RegExp * Scanner::mkDot() const
{
	Range * full = encoding.fullRange();
	uint32_t c = '\n';
	if (!encoding.encode(c))
		fatalf("Bad code point: '0x%X'", c);
	Range * ran = Range::sym (c);
	Range * inv = Range::sub (full, ran);

	return matchSymbolRange(inv);
}

/*
 * Create a byte range that includes all possible input characters.
 * This may include characters, which do not map to any valid symbol
 * in current encoding. For encodings, which directly map symbols to
 * input characters (ASCII, EBCDIC, UTF-32), it equals [^]. For other
 * encodings (UTF-16, UTF-8), [^] and this range are different.
 *
 * Also note that default range doesn't respect encoding policy
 * (the way invalid code points are treated).
 */
RegExp * Scanner::mkDefault() const
{
	Range * def = Range::ran (0, encoding.nCodeUnits());
	return new MatchOp(def);
}

/*
 * note [counted repetition expansion]
 *
 * r{0} ;;= <empty regexp>
 * r{n} ::= r{n-1} r
 * r{n,m} ::= r{n} (r{0} | ... | r{m-n})
 * r{n,} ::= r{n} r*
 */

// see note [counted repetition expansion]
RegExp * repeat (RegExp * e, uint32_t n)
{
	RegExp * r = NULL;
	for (uint32_t i = 0; i < n; ++i)
	{
		r = doCat (r, e);
	}
	return r;
}

// see note [counted repetition expansion]
RegExp * repeat_from_to (RegExp * e, uint32_t n, uint32_t m)
{
	RegExp * r1 = repeat (e, n);
	RegExp * r2 = NULL;
	for (uint32_t i = n; i < m; ++i)
	{
		r2 = mkAlt (new NullOp, doCat (e, r2));
	}
	return doCat (r1, r2);
}

// see note [counted repetition expansion]
RegExp * repeat_from (RegExp * e, uint32_t n)
{
	RegExp * r1 = repeat (e, n);
	RegExp * r2 = mkAlt (new NullOp, new CloseOp (e));
	return doCat (r1, r2);
}

} // namespace re2c