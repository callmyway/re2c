/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_2.re"
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
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt24;
char *yyt25;
char *yyt26;
char *yyt27;
char *yyt28;
char *yyt29;
char *yyt3;
char *yyt30;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
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
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt24) in->yyt24 -= free;
if (in->yyt25) in->yyt25 -= free;
if (in->yyt26) in->yyt26 -= free;
if (in->yyt27) in->yyt27 -= free;
if (in->yyt28) in->yyt28 -= free;
if (in->yyt29) in->yyt29 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt30) in->yyt30 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


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
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
}


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


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1, *a2, *a3,
        *b0, *b1, *b2, *b3;
loop:
    in->tok = in->cur;

#line 249 "gen/re2c/cat4_2-eof-tdfa1.c"
{
	char yych;
yyFillLabel3_0:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt1 = in->yyt2 = in->cur;
		goto yy4;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_0;
			goto yy75;
		}
		goto yy2;
	}
yy2:
	++in->cur;
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_2.re"
	{ return 1; }
#line 270 "gen/re2c/cat4_2-eof-tdfa1.c"
yy4:
	in->mar = ++in->cur;
yyFillLabel3_1:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt8 = in->cur;
		goto yy5;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_1;
		}
		goto yy3;
	}
yy5:
	++in->cur;
yyFillLabel3_2:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_2;
		}
		goto yy6;
	case 'a':
		in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
		goto yy7;
	default:	goto yy9;
	}
yy6:
	in->cur = in->mar;
	goto yy3;
yy7:
	++in->cur;
yyFillLabel3_3:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt9 = in->yyt16 = in->yyt17 = in->cur;
		goto yy10;
	case 'b':
		in->yyt2 = in->yyt8;
		goto yy8;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_3;
		}
		goto yy6;
	}
yy8:
	++in->cur;
yyFillLabel3_4:
	yych = *in->cur;
yy9:
	switch (yych) {
	case 'a':
		in->yyt4 = in->yyt5 = in->cur;
		goto yy11;
	case 'b':	goto yy8;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_4;
		}
		goto yy6;
	}
yy10:
	++in->cur;
yyFillLabel3_5:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_5;
		}
		goto yy6;
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt18 = in->yyt19 = in->yyt28 = in->cur;
		goto yy12;
	default:	goto yy14;
	}
yy11:
	++in->cur;
yyFillLabel3_6:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt16 = in->cur;
		goto yy15;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_6;
		}
		goto yy6;
	}
yy12:
	++in->cur;
yyFillLabel3_7:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt20 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt29 = in->cur;
		goto yy16;
	case 'b':
		in->yyt2 = in->yyt8;
		in->yyt3 = in->yyt9;
		in->yyt4 = in->yyt16;
		in->yyt5 = in->yyt17;
		goto yy13;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_7;
		}
		goto yy6;
	}
yy13:
	++in->cur;
yyFillLabel3_8:
	yych = *in->cur;
yy14:
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->cur;
		goto yy17;
	case 'b':	goto yy13;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_8;
		}
		goto yy6;
	}
yy15:
	++in->cur;
yyFillLabel3_9:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_9;
		}
		goto yy6;
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt25 = in->cur;
		goto yy18;
	default:	goto yy20;
	}
yy16:
	++in->cur;
yyFillLabel3_10:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_10;
		}
		goto yy6;
	case 'a':
		in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt30 = in->cur;
		goto yy21;
	default:	goto yy23;
	}
yy17:
	++in->cur;
yyFillLabel3_11:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt16 = in->yyt17 = in->cur;
		goto yy24;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_11;
		}
		goto yy6;
	}
yy18:
	++in->cur;
yyFillLabel3_12:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
		goto yy25;
	case 'b':
		in->yyt5 = in->yyt16;
		goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_12;
		}
		goto yy6;
	}
yy19:
	++in->cur;
yyFillLabel3_13:
	yych = *in->cur;
yy20:
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->cur;
		goto yy26;
	case 'b':	goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_13;
		}
		goto yy6;
	}
yy21:
	++in->cur;
yyFillLabel3_14:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt21 = in->yyt22 = in->yyt23 = in->yyt24 = in->cur;
		goto yy27;
	case 'b':
		in->yyt2 = in->yyt8;
		in->yyt3 = in->yyt9;
		in->yyt4 = in->yyt16;
		in->yyt5 = in->yyt17;
		in->yyt6 = in->yyt27;
		in->yyt7 = in->yyt29;
		in->yyt18 = in->yyt25;
		in->yyt19 = in->yyt26;
		in->yyt28 = in->yyt20;
		goto yy22;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_14;
		}
		goto yy6;
	}
yy22:
	++in->cur;
yyFillLabel3_15:
	yych = *in->cur;
yy23:
	switch (yych) {
	case 'a':
		in->yyt8 = in->yyt9 = in->yyt12 = in->yyt14 = in->yyt15 = in->cur;
		goto yy29;
	case 'b':	goto yy22;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_15;
		}
		goto yy6;
	}
yy24:
	++in->cur;
yyFillLabel3_16:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_16;
		}
		goto yy6;
	case 'a':
		in->yyt14 = in->yyt15 = in->yyt25 = in->yyt26 = in->yyt27 = in->cur;
		goto yy30;
	default:	goto yy32;
	}
yy25:
	++in->cur;
yyFillLabel3_17:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_17;
		}
		goto yy6;
	case 'a':
		in->yyt14 = in->yyt15 = in->yyt28 = in->yyt29 = in->yyt30 = in->cur;
		goto yy33;
	default:	goto yy35;
	}
yy26:
	++in->cur;
yyFillLabel3_18:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt16 = in->cur;
		goto yy36;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_18;
		}
		goto yy6;
	}
yy27:
	++in->cur;
yyFillLabel3_19:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt2 = in->yyt8;
		in->yyt4 = in->yyt16;
		in->yyt5 = in->yyt17;
		in->yyt6 = in->yyt27;
		in->yyt7 = in->yyt29;
		in->yyt14 = in->yyt24;
		in->yyt15 = in->yyt24;
		in->yyt24 = in->cur;
		in->yyt8 = in->yyt3;
		in->yyt16 = in->yyt18;
		in->yyt17 = in->yyt19;
		in->yyt18 = in->yyt25;
		in->yyt19 = in->yyt26;
		in->yyt27 = in->yyt12;
		in->yyt29 = in->yyt13;
		in->yyt3 = in->yyt9;
		in->yyt12 = in->yyt23;
		in->yyt13 = in->yyt23;
		in->yyt23 = in->cur;
		in->yyt9 = in->yyt28;
		in->yyt25 = in->yyt10;
		in->yyt26 = in->yyt11;
		in->yyt28 = in->yyt20;
		in->yyt10 = in->yyt22;
		in->yyt11 = in->yyt22;
		in->yyt22 = in->cur;
		in->yyt20 = in->yyt30;
		in->yyt30 = in->yyt21;
		in->yyt21 = in->cur;
		goto yy27;
	case 'b':	goto yy39;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_19;
		}
		goto yy6;
	}
yy29:
	++in->cur;
yyFillLabel3_20:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt16 = in->yyt17 = in->cur;
		goto yy41;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_20;
		}
		goto yy6;
	}
yy30:
	++in->cur;
yyFillLabel3_21:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
		goto yy42;
	case 'b':
		in->yyt7 = in->yyt17;
		in->yyt9 = in->yyt16;
		goto yy31;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_21;
		}
		goto yy6;
	}
yy31:
	++in->cur;
yyFillLabel3_22:
	yych = *in->cur;
yy32:
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt11 = in->yyt14 = in->yyt15 = in->cur;
		goto yy43;
	case 'b':	goto yy31;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_22;
		}
		goto yy6;
	}
yy33:
	++in->cur;
yyFillLabel3_23:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
		goto yy44;
	case 'b':
		in->yyt5 = in->yyt16;
		in->yyt6 = in->yyt19;
		in->yyt7 = in->yyt20;
		in->yyt25 = in->yyt18;
		goto yy34;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_23;
		}
		goto yy6;
	}
yy34:
	++in->cur;
yyFillLabel3_24:
	yych = *in->cur;
yy35:
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
		goto yy46;
	case 'b':	goto yy34;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_24;
		}
		goto yy6;
	}
yy36:
	++in->cur;
yyFillLabel3_25:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_25;
		}
		goto yy6;
	case 'a':
		in->yyt14 = in->yyt15 = in->yyt17 = in->cur;
		goto yy47;
	default:	goto yy49;
	}
yy37:
	++in->cur;
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt4;
	b1 = in->yyt5;
	a2 = in->yyt6;
	b2 = in->yyt7;
	a3 = in->yyt14;
	b3 = in->yyt15;
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_2.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
        outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
        outs(out, a3, b3); outc(out, '.'); outs(out, b3, in->cur);
        goto loop;
    }
#line 724 "gen/re2c/cat4_2-eof-tdfa1.c"
yy39:
	++in->cur;
yyFillLabel3_26:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt18;
		in->yyt5 = in->yyt19;
		in->yyt6 = in->yyt12;
		in->yyt7 = in->yyt13;
		in->yyt8 = in->yyt9 = in->yyt12 = in->yyt14 = in->yyt15 = in->cur;
		in->yyt3 = in->yyt28;
		in->yyt18 = in->yyt10;
		in->yyt19 = in->yyt11;
		in->yyt28 = in->yyt30;
		goto yy29;
	case 'b':	goto yy39;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_26;
		}
		goto yy6;
	}
yy41:
	++in->cur;
yyFillLabel3_27:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_27;
		}
		goto yy6;
	case 'a':
		in->yyt11 = in->yyt15 = in->yyt25 = in->yyt26 = in->yyt27 = in->cur;
		goto yy50;
	default:	goto yy52;
	}
yy42:
	++in->cur;
yyFillLabel3_28:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_28;
		}
		goto yy6;
	case 'a':
		in->yyt14 = in->yyt15 = in->yyt28 = in->yyt29 = in->yyt30 = in->cur;
		goto yy53;
	default:	goto yy55;
	}
yy43:
	++in->cur;
yyFillLabel3_29:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt12 = in->yyt16 = in->cur;
		goto yy56;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_29;
		}
		goto yy6;
	}
yy44:
	++in->cur;
yyFillLabel3_30:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt5 = in->yyt16;
		in->yyt6 = in->yyt19;
		in->yyt7 = in->yyt20;
		in->yyt14 = in->yyt9;
		in->yyt15 = in->yyt9;
		in->yyt9 = in->cur;
		in->yyt16 = in->yyt25;
		in->yyt19 = in->yyt29;
		in->yyt20 = in->yyt30;
		in->yyt25 = in->yyt18;
		in->yyt29 = in->yyt8;
		in->yyt30 = in->yyt8;
		in->yyt8 = in->cur;
		in->yyt18 = in->yyt28;
		in->yyt28 = in->yyt3;
		in->yyt3 = in->cur;
		goto yy44;
	case 'b':	goto yy57;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_30;
		}
		goto yy6;
	}
yy46:
	++in->cur;
yyFillLabel3_31:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt9 = in->yyt16 = in->cur;
		goto yy59;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_31;
		}
		goto yy6;
	}
yy47:
	++in->cur;
yyFillLabel3_32:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->cur;
		goto yy60;
	case 'b':
		in->yyt7 = in->yyt16;
		goto yy48;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_32;
		}
		goto yy6;
	}
yy48:
	++in->cur;
yyFillLabel3_33:
	yych = *in->cur;
yy49:
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt15 = in->cur;
		goto yy62;
	case 'b':	goto yy48;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_33;
		}
		goto yy6;
	}
yy50:
	++in->cur;
yyFillLabel3_34:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt15 = in->yyt10;
		goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt18;
		in->yyt5 = in->yyt19;
		in->yyt6 = in->yyt8;
		in->yyt7 = in->yyt12;
		in->yyt14 = in->yyt11;
		in->yyt10 = in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
		in->yyt3 = in->yyt28;
		goto yy42;
	case 'b':
		in->yyt9 = in->yyt16;
		in->yyt12 = in->yyt17;
		in->yyt15 = in->yyt10;
		goto yy51;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_34;
		}
		goto yy6;
	}
yy51:
	++in->cur;
yyFillLabel3_35:
	yych = *in->cur;
yy52:
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt18;
		in->yyt5 = in->yyt19;
		in->yyt6 = in->yyt8;
		in->yyt7 = in->yyt12;
		in->yyt10 = in->yyt11 = in->yyt14 = in->yyt15 = in->cur;
		in->yyt3 = in->yyt28;
		goto yy43;
	case 'b':	goto yy51;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_35;
		}
		goto yy6;
	}
yy53:
	++in->cur;
yyFillLabel3_36:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt7 = in->yyt17;
		in->yyt14 = in->yyt10;
		in->yyt15 = in->yyt10;
		goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt26;
		in->yyt7 = in->yyt27;
		in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
		goto yy44;
	case 'b':
		in->yyt7 = in->yyt17;
		in->yyt9 = in->yyt16;
		in->yyt14 = in->yyt10;
		in->yyt15 = in->yyt10;
		in->yyt25 = in->yyt18;
		in->yyt26 = in->yyt19;
		in->yyt27 = in->yyt20;
		goto yy54;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_36;
		}
		goto yy6;
	}
yy54:
	++in->cur;
yyFillLabel3_37:
	yych = *in->cur;
yy55:
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt26;
		in->yyt7 = in->yyt27;
		in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
		goto yy46;
	case 'b':	goto yy54;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_37;
		}
		goto yy6;
	}
yy56:
	++in->cur;
yyFillLabel3_38:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_38;
		}
		goto yy6;
	case 'a':
		in->yyt13 = in->yyt15 = in->yyt17 = in->cur;
		goto yy63;
	default:	goto yy65;
	}
yy57:
	++in->cur;
yyFillLabel3_39:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt5 = in->yyt25;
		in->yyt6 = in->yyt29;
		in->yyt7 = in->yyt30;
		in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
		in->yyt25 = in->yyt28;
		goto yy46;
	case 'b':	goto yy57;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_39;
		}
		goto yy6;
	}
yy59:
	++in->cur;
yyFillLabel3_40:
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_40;
		}
		goto yy6;
	case 'a':
		in->yyt10 = in->yyt15 = in->yyt17 = in->cur;
		goto yy66;
	default:	goto yy68;
	}
yy60:
	++in->cur;
yyFillLabel3_41:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt7 = in->yyt16;
		in->yyt14 = in->yyt8;
		in->yyt15 = in->yyt8;
		in->yyt8 = in->cur;
		in->yyt16 = in->yyt17;
		in->yyt17 = in->yyt3;
		in->yyt3 = in->cur;
		goto yy60;
	case 'b':	goto yy69;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_41;
		}
		goto yy6;
	}
yy62:
	++in->cur;
yyFillLabel3_42:
	yych = *in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->cur;
		goto yy71;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_42;
		}
		goto yy6;
	}
yy63:
	++in->cur;
yyFillLabel3_43:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt15 = in->yyt12;
		goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt10;
		in->yyt7 = in->yyt11;
		in->yyt14 = in->yyt13;
		in->yyt3 = in->yyt8 = in->cur;
		goto yy60;
	case 'b':
		in->yyt11 = in->yyt16;
		in->yyt15 = in->yyt12;
		goto yy64;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_43;
		}
		goto yy6;
	}
yy64:
	++in->cur;
yyFillLabel3_44:
	yych = *in->cur;
yy65:
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt10;
		in->yyt7 = in->yyt11;
		in->yyt14 = in->yyt15 = in->cur;
		goto yy62;
	case 'b':	goto yy64;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_44;
		}
		goto yy6;
	}
yy66:
	++in->cur;
yyFillLabel3_45:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt15 = in->yyt9;
		goto yy37;
	case 'a':
		in->yyt5 = in->yyt25;
		in->yyt6 = in->yyt3;
		in->yyt7 = in->yyt8;
		in->yyt14 = in->yyt10;
		in->yyt3 = in->yyt8 = in->cur;
		goto yy60;
	case 'b':
		in->yyt8 = in->yyt16;
		in->yyt15 = in->yyt9;
		goto yy67;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_45;
		}
		goto yy6;
	}
yy67:
	++in->cur;
yyFillLabel3_46:
	yych = *in->cur;
yy68:
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt5 = in->yyt25;
		in->yyt6 = in->yyt3;
		in->yyt7 = in->yyt8;
		in->yyt14 = in->yyt15 = in->cur;
		goto yy62;
	case 'b':	goto yy67;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_46;
		}
		goto yy6;
	}
yy69:
	++in->cur;
yyFillLabel3_47:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt7 = in->yyt17;
		in->yyt14 = in->yyt15 = in->cur;
		goto yy62;
	case 'b':	goto yy69;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_47;
		}
		goto yy6;
	}
yy71:
	++in->cur;
yyFillLabel3_48:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'a':
		in->yyt15 = in->yyt3;
		in->yyt3 = in->cur;
		goto yy71;
	case 'b':	goto yy73;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_48;
		}
		goto yy6;
	}
yy73:
	++in->cur;
yyFillLabel3_49:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy37;
	case 'b':	goto yy73;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_49;
		}
		goto yy6;
	}
yy75:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 1209 "gen/re2c/cat4_2-eof-tdfa1.c"
}
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_2.re"

}
