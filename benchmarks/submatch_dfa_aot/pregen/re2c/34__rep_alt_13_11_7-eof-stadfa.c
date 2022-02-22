/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/34__rep_alt_13_11_7.re"
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
#line 30 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 34 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
taglist_t *yytm1;
taglist_t *yytm10;
taglist_t *yytm11;
taglist_t *yytm12;
taglist_t *yytm13;
taglist_t *yytm2;
taglist_t *yytm3;
taglist_t *yytm4;
taglist_t *yytm5;
taglist_t *yytm6;
taglist_t *yytm7;
taglist_t *yytm8;
taglist_t *yytm9;
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 58 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
in->yytm1 = 0;
in->yytm10 = 0;
in->yytm11 = 0;
in->yytm12 = 0;
in->yytm13 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
in->yytm4 = 0;
in->yytm5 = 0;
in->yytm6 = 0;
in->yytm7 = 0;
in->yytm8 = 0;
in->yytm9 = 0;
#line 43 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


static inline int fill(input_t *in)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 129 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 151 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
#line 40 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    
#line 155 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
in->yytm1 = 0;
in->yytm10 = 0;
in->yytm11 = 0;
in->yytm12 = 0;
in->yytm13 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
in->yytm4 = 0;
in->yytm5 = 0;
in->yytm6 = 0;
in->yytm7 = 0;
in->yytm8 = 0;
in->yytm9 = 0;
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
}
#line 81 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/34__rep_alt_13_11_7.re"


static const char *print(Output *out, const char *tok, const taglist_t *t)
{
    if (!t) return tok;

    const char *s = print(out, tok, t->pred);
    const char *e = tok + t->dist;
    outs(out, s, e);
    outc(out, '.');
    return e;
}

static int lex(input_t *in, Output *out)
{
    taglist_t *t = NULL;

loop:
    in->tok = in->cur;

#line 230 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
{
	char yych;
	in->yytm2 = in->yytm1;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy3;
		case 'a': goto yy5;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy56;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 23 "../../../benchmarks/submatch_dfa_aot/src/re2c/34__rep_alt_13_11_7.re"
	{ return 1; }
#line 251 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
yy3:
	++in->cur;
	taglist(&in->yytm2, in->tok, in->tok - 1, &in->tlp);
	in->yytm1 = in->yytm2;
yy4:
	t = in->yytm1;
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/34__rep_alt_13_11_7.re"
	{
        print(out, in->tok, t);
        outc(out, '\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 265 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
yy5:
	in->mar = ++in->cur;
	in->yytm3 = in->yytm1;
	in->yytm5 = in->yytm1;
	in->yytm4 = in->yytm1;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy6;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy6:
	++in->cur;
	in->yytm6 = in->yytm3;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy8;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy7;
	}
yy7:
	in->cur = in->mar;
	goto yy2;
yy8:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm7 = in->yytm5;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy9;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy7;
	}
yy9:
	++in->cur;
	in->yytm10 = in->yytm8;
	in->yytm9 = in->yytm7;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy10;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy7;
	}
yy10:
	++in->cur;
	in->yytm12 = in->yytm10;
	in->yytm11 = in->yytm9;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy7;
	}
yy11:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm5 = in->yytm11;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy7;
	}
yy12:
	++in->cur;
	in->yytm1 = in->yytm13;
	in->yytm7 = in->yytm5;
	in->yytm2 = in->yytm13;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy7;
	}
yy13:
	++in->cur;
	taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
	in->yytm2->dist += -1;
	in->yytm1 = in->yytm2;
	goto yy4;
yy14:
	++in->cur;
	in->yytm9 = in->yytm7;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
			}
			goto yy7;
	}
yy15:
	++in->cur;
	in->yytm6 = in->yytm3;
	in->yytm11 = in->yytm9;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
			}
			goto yy7;
	}
yy16:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm5 = in->yytm11;
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy17;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy7;
	}
yy17:
	++in->cur;
	in->yytm1 = in->yytm5;
	in->yytm10 = in->yytm8;
	in->yytm2 = in->yytm5;
yyFillLabel11:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy7;
	}
yy18:
	++in->cur;
	in->yytm12 = in->yytm10;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
			}
			goto yy7;
	}
yy19:
	++in->cur;
	in->yytm1 = in->yytm4;
	in->yytm6 = in->yytm3;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm4;
yyFillLabel13:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy20;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel13;
			}
			goto yy7;
	}
yy20:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm7 = in->yytm5;
	in->yytm2 = in->yytm13;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
	in->yytm4 = in->yytm1;
	taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
	in->yytm4->dist += -1;
	in->yytm1 = in->yytm13;
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy21;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel14;
			}
			goto yy7;
	}
yy21:
	++in->cur;
	in->yytm6 = in->yytm3;
	in->yytm10 = in->yytm8;
	in->yytm9 = in->yytm7;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel15:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy22;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel15;
			}
			goto yy7;
	}
yy22:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm12 = in->yytm10;
	in->yytm7 = in->yytm5;
	in->yytm11 = in->yytm9;
	in->yytm6 = in->yytm3;
yyFillLabel16:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy23;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel16;
			}
			goto yy7;
	}
yy23:
	++in->cur;
	in->yytm10 = in->yytm8;
	in->yytm13 = in->yytm12;
	in->yytm9 = in->yytm7;
	in->yytm5 = in->yytm11;
	in->yytm8 = in->yytm6;
yyFillLabel17:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy24;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel17;
			}
			goto yy7;
	}
yy24:
	++in->cur;
	in->yytm1 = in->yytm13;
	in->yytm12 = in->yytm10;
	in->yytm11 = in->yytm9;
	in->yytm7 = in->yytm5;
	in->yytm2 = in->yytm13;
	in->yytm10 = in->yytm8;
yyFillLabel18:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel18;
			}
			goto yy7;
	}
yy25:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm5 = in->yytm11;
	in->yytm9 = in->yytm7;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm12 = in->yytm10;
yyFillLabel19:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy26;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel19;
			}
			goto yy7;
	}
yy26:
	++in->cur;
	in->yytm1 = in->yytm13;
	in->yytm6 = in->yytm3;
	in->yytm7 = in->yytm5;
	in->yytm11 = in->yytm9;
	in->yytm2 = in->yytm13;
	in->yytm13 = in->yytm12;
yyFillLabel20:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy27;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel20;
			}
			goto yy7;
	}
yy27:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm9 = in->yytm7;
	in->yytm5 = in->yytm11;
	in->yytm2 = in->yytm13;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm13;
yyFillLabel21:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel21;
			}
			goto yy7;
	}
yy28:
	++in->cur;
	in->yytm6 = in->yytm3;
	in->yytm10 = in->yytm8;
	in->yytm11 = in->yytm9;
	in->yytm2 = in->yytm5;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm5;
yyFillLabel22:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy29;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel22;
			}
			goto yy7;
	}
yy29:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm12 = in->yytm10;
	in->yytm5 = in->yytm11;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel23:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy30;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel23;
			}
			goto yy7;
	}
yy30:
	++in->cur;
	in->yytm1 = in->yytm5;
	in->yytm10 = in->yytm8;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm5;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
yyFillLabel24:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy31;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel24;
			}
			goto yy7;
	}
yy31:
	++in->cur;
	in->yytm12 = in->yytm10;
	in->yytm2 = in->yytm13;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
	in->yytm1 = in->yytm13;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
yyFillLabel25:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy32;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel25;
			}
			goto yy7;
	}
yy32:
	++in->cur;
	in->yytm6 = in->yytm3;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm4;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm4;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
yyFillLabel26:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy33;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel26;
			}
			goto yy7;
	}
yy33:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm7 = in->yytm5;
	in->yytm2 = in->yytm13;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
	in->yytm4 = in->yytm1;
	taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
	in->yytm4->dist += -1;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
yyFillLabel27:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy34;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel27;
			}
			goto yy7;
	}
yy34:
	++in->cur;
	in->yytm10 = in->yytm8;
	in->yytm9 = in->yytm7;
	in->yytm2 = in->yytm13;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm13 = in->yytm12;
yyFillLabel28:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy35;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel28;
			}
			goto yy7;
	}
yy35:
	++in->cur;
	in->yytm12 = in->yytm10;
	in->yytm11 = in->yytm9;
	in->yytm2 = in->yytm13;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm7 = in->yytm5;
	in->yytm6 = in->yytm3;
	in->yytm1 = in->yytm13;
yyFillLabel29:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy36;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel29;
			}
			goto yy7;
	}
yy36:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm5 = in->yytm11;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm9 = in->yytm7;
	in->yytm8 = in->yytm6;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel30:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy37;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel30;
			}
			goto yy7;
	}
yy37:
	++in->cur;
	in->yytm1 = in->yytm13;
	in->yytm7 = in->yytm5;
	in->yytm2 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm11 = in->yytm9;
	in->yytm10 = in->yytm8;
	in->yytm6 = in->yytm3;
yyFillLabel31:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy38;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel31;
			}
			goto yy7;
	}
yy38:
	++in->cur;
	in->yytm9 = in->yytm7;
	in->yytm2 = in->yytm13;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm13 = in->yytm12;
	in->yytm5 = in->yytm11;
	in->yytm12 = in->yytm10;
	in->yytm8 = in->yytm6;
yyFillLabel32:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy39;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel32;
			}
			goto yy7;
	}
yy39:
	++in->cur;
	in->yytm6 = in->yytm3;
	in->yytm11 = in->yytm9;
	in->yytm2 = in->yytm13;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm7 = in->yytm5;
	in->yytm10 = in->yytm8;
yyFillLabel33:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy40;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel33;
			}
			goto yy7;
	}
yy40:
	++in->cur;
	in->yytm8 = in->yytm6;
	in->yytm5 = in->yytm11;
	in->yytm2 = in->yytm13;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm13;
	in->yytm9 = in->yytm7;
	in->yytm12 = in->yytm10;
yyFillLabel34:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy41;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel34;
			}
			goto yy7;
	}
yy41:
	++in->cur;
	in->yytm10 = in->yytm8;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm5;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm5;
	in->yytm11 = in->yytm9;
yyFillLabel35:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy42;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel35;
			}
			goto yy7;
	}
yy42:
	++in->cur;
	in->yytm12 = in->yytm10;
	in->yytm5 = in->yytm11;
	in->yytm2 = in->yytm13;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm13;
yyFillLabel36:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy43;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel36;
			}
			goto yy7;
	}
yy43:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm5;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm5;
yyFillLabel37:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy44;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel37;
			}
			goto yy7;
	}
yy44:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
	in->yytm7 = in->yytm1;
	in->yytm1 = in->yytm13;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm7;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel38:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy45;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel38;
			}
			goto yy7;
	}
yy45:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm4;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm4;
yyFillLabel39:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy46;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel39;
			}
			goto yy7;
	}
yy46:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm7 = in->yytm5;
	in->yytm5 = in->yytm1;
	taglist(&in->yytm5, in->tok, in->cur, &in->tlp);
	in->yytm5->dist += -1;
	in->yytm4 = in->yytm1;
	taglist(&in->yytm4, in->tok, in->cur, &in->tlp);
	in->yytm4->dist += -1;
	in->yytm9 = in->yytm1;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm9;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel40:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy47;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel40;
			}
			goto yy7;
	}
yy47:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm9 = in->yytm7;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel41:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy48;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel41;
			}
			goto yy7;
	}
yy48:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm11 = in->yytm9;
	in->yytm7 = in->yytm5;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
yyFillLabel42:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy49;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel42;
			}
			goto yy7;
	}
yy49:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm5 = in->yytm11;
	in->yytm9 = in->yytm7;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm8 = in->yytm6;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel43:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy50;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel43;
			}
			goto yy7;
	}
yy50:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm7 = in->yytm5;
	in->yytm11 = in->yytm9;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm10 = in->yytm8;
	in->yytm6 = in->yytm3;
yyFillLabel44:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy51;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel44;
			}
			goto yy7;
	}
yy51:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm9 = in->yytm7;
	in->yytm5 = in->yytm11;
	in->yytm13 = in->yytm12;
	in->yytm12 = in->yytm10;
	in->yytm8 = in->yytm6;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel45:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy52;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel45;
			}
			goto yy7;
	}
yy52:
	++in->cur;
	in->yytm2 = in->yytm13;
	in->yytm11 = in->yytm9;
	in->yytm7 = in->yytm5;
	in->yytm1 = in->yytm13;
	in->yytm13 = in->yytm12;
	in->yytm10 = in->yytm8;
	in->yytm6 = in->yytm3;
yyFillLabel46:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy53;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel46;
			}
			goto yy7;
	}
yy53:
	++in->cur;
	in->yytm5 = in->yytm11;
	in->yytm2 = in->yytm13;
	in->yytm9 = in->yytm7;
	in->yytm3 = in->yytm1;
	in->yytm1 = in->yytm13;
	in->yytm12 = in->yytm10;
	in->yytm8 = in->yytm6;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel47:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy54;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel47;
			}
			goto yy7;
	}
yy54:
	++in->cur;
	in->yytm13 = in->yytm12;
	in->yytm2 = in->yytm5;
	in->yytm10 = in->yytm8;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm1;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
	in->yytm1 = in->yytm5;
	in->yytm11 = in->yytm9;
yyFillLabel48:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy55;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel48;
			}
			goto yy7;
	}
yy55:
	++in->cur;
	in->yytm5 = in->yytm11;
	in->yytm2 = in->yytm13;
	in->yytm7 = in->yytm1;
	in->yytm1 = in->yytm13;
	in->yytm12 = in->yytm10;
	in->yytm8 = in->yytm6;
	in->yytm6 = in->yytm3;
	in->yytm3 = in->yytm7;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	in->yytm3->dist += -1;
yyFillLabel49:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy43;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel49;
			}
			goto yy7;
	}
yy56:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 1257 "gen/re2c/34__rep_alt_13_11_7-eof-stadfa.c"
}
#line 30 "../../../benchmarks/submatch_dfa_aot/src/re2c/34__rep_alt_13_11_7.re"

}
