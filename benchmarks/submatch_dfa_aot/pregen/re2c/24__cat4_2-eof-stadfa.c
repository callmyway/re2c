/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
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
    
#line 30 "gen/re2c/24__cat4_2-eof-stadfa.c"
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
char *yyt31;
char *yyt32;
char *yyt33;
char *yyt34;
char *yyt35;
char *yyt36;
char *yyt37;
char *yyt38;
char *yyt39;
char *yyt4;
char *yyt40;
char *yyt41;
char *yyt42;
char *yyt43;
char *yyt44;
char *yyt45;
char *yyt46;
char *yyt47;
char *yyt48;
char *yyt49;
char *yyt5;
char *yyt50;
char *yyt51;
char *yyt52;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 86 "gen/re2c/24__cat4_2-eof-stadfa.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 97 "gen/re2c/24__cat4_2-eof-stadfa.c"
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
    
#line 155 "gen/re2c/24__cat4_2-eof-stadfa.c"
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
if (in->yyt31) in->yyt31 -= free;
if (in->yyt32) in->yyt32 -= free;
if (in->yyt33) in->yyt33 -= free;
if (in->yyt34) in->yyt34 -= free;
if (in->yyt35) in->yyt35 -= free;
if (in->yyt36) in->yyt36 -= free;
if (in->yyt37) in->yyt37 -= free;
if (in->yyt38) in->yyt38 -= free;
if (in->yyt39) in->yyt39 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt40) in->yyt40 -= free;
if (in->yyt41) in->yyt41 -= free;
if (in->yyt42) in->yyt42 -= free;
if (in->yyt43) in->yyt43 -= free;
if (in->yyt44) in->yyt44 -= free;
if (in->yyt45) in->yyt45 -= free;
if (in->yyt46) in->yyt46 -= free;
if (in->yyt47) in->yyt47 -= free;
if (in->yyt48) in->yyt48 -= free;
if (in->yyt49) in->yyt49 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt50) in->yyt50 -= free;
if (in->yyt51) in->yyt51 -= free;
if (in->yyt52) in->yyt52 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;
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
    
#line 229 "gen/re2c/24__cat4_2-eof-stadfa.c"
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
in->yyt31 = 0;
in->yyt32 = 0;
in->yyt33 = 0;
in->yyt34 = 0;
in->yyt35 = 0;
in->yyt36 = 0;
in->yyt37 = 0;
in->yyt38 = 0;
in->yyt39 = 0;
in->yyt4 = 0;
in->yyt40 = 0;
in->yyt41 = 0;
in->yyt42 = 0;
in->yyt43 = 0;
in->yyt44 = 0;
in->yyt45 = 0;
in->yyt46 = 0;
in->yyt47 = 0;
in->yyt48 = 0;
in->yyt49 = 0;
in->yyt5 = 0;
in->yyt50 = 0;
in->yyt51 = 0;
in->yyt52 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 40 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    
#line 285 "gen/re2c/24__cat4_2-eof-stadfa.c"
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1, *a2, *a3,
        *b0, *b1, *b2, *b3;
loop:
    in->tok = in->cur;

#line 337 "gen/re2c/24__cat4_2-eof-stadfa.c"
{
	char yych;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy3;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy41;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
	{ return 1; }
#line 356 "gen/re2c/24__cat4_2-eof-stadfa.c"
yy3:
	in->mar = ++in->cur;
	in->yyt8 = in->yyt9 = in->cur - 1;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy4;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy4:
	++in->cur;
	in->yyt2 = in->yyt9;
	in->yyt11 = in->yyt9;
	in->yyt1 = in->yyt8;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy5;
	}
yy5:
	in->cur = in->mar;
	goto yy2;
yy6:
	++in->cur;
	in->yyt2 = in->yyt9;
	in->yyt15 = in->yyt11;
	in->yyt1 = in->yyt8;
	in->yyt14 = in->yyt10;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy5;
	}
yy7:
	++in->cur;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy9;
		case 'b': goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy5;
	}
yy8:
	++in->cur;
	in->yyt6 = in->yyt13;
	in->yyt19 = in->yyt13;
	in->yyt5 = in->yyt12;
	in->yyt18 = in->yyt12;
	in->yyt2 = in->yyt9;
	in->yyt4 = in->yyt15;
	in->yyt17 = in->yyt15;
	in->yyt1 = in->yyt8;
	in->yyt3 = in->yyt14;
	in->yyt16 = in->yyt14;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy10;
		case 'b': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy5;
	}
yy9:
	++in->cur;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt8 = in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy5;
	}
yy10:
	++in->cur;
	in->yyt6 = in->yyt13;
	in->yyt25 = in->yyt19;
	in->yyt5 = in->yyt12;
	in->yyt24 = in->yyt18;
	in->yyt2 = in->yyt9;
	in->yyt4 = in->yyt15;
	in->yyt23 = in->yyt17;
	in->yyt1 = in->yyt8;
	in->yyt3 = in->yyt14;
	in->yyt22 = in->yyt16;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy13;
		case 'b': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy5;
	}
yy11:
	++in->cur;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt11 = in->yyt2;
	in->yyt17 = in->yyt4;
	in->yyt10 = in->yyt1;
	in->yyt16 = in->yyt3;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
			}
			goto yy5;
	}
yy12:
	++in->cur;
	in->yyt6 = in->yyt13;
	in->yyt19 = in->yyt13;
	in->yyt5 = in->yyt12;
	in->yyt18 = in->yyt12;
	in->yyt4 = in->yyt15;
	in->yyt17 = in->yyt15;
	in->yyt3 = in->yyt14;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy15;
		case 'b': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
			}
			goto yy5;
	}
yy13:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt35 = in->yyt21;
	in->yyt34 = in->yyt20;
	in->yyt33 = in->yyt20;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt31 = in->yyt25;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt29 = in->yyt24;
	in->yyt2 = in->yyt9;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt27 = in->yyt23;
	in->yyt1 = in->yyt8;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy17;
		case 'b': goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy5;
	}
yy14:
	++in->cur;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt15 = in->yyt11;
	in->yyt23 = in->yyt17;
	in->yyt14 = in->yyt10;
	in->yyt22 = in->yyt16;
	in->yyt8 = in->yyt12 = in->yyt13 = in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt11 = in->yyt2;
	in->yyt17 = in->yyt4;
	in->yyt10 = in->yyt1;
	in->yyt16 = in->yyt3;
yyFillLabel11:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy5;
	}
yy15:
	++in->cur;
	in->yyt6 = in->yyt13;
	in->yyt25 = in->yyt19;
	in->yyt5 = in->yyt12;
	in->yyt24 = in->yyt18;
	in->yyt4 = in->yyt15;
	in->yyt23 = in->yyt17;
	in->yyt3 = in->yyt14;
	in->yyt22 = in->yyt16;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy20;
		case 'b': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
			}
			goto yy5;
	}
yy16:
	++in->cur;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel13:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy21;
		case 'b': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel13;
			}
			goto yy5;
	}
yy17:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt44 = in->yyt35;
	in->yyt34 = in->yyt20;
	in->yyt43 = in->yyt33;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt42 = in->yyt31;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt41 = in->yyt29;
	in->yyt2 = in->yyt9;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt40 = in->yyt27;
	in->yyt1 = in->yyt8;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt39 = in->yyt26;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy22;
		case 'b': goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel14;
			}
			goto yy5;
	}
yy18:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt11 = in->yyt2;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt10 = in->yyt1;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel15:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel15;
			}
			goto yy5;
	}
yy19:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt35 = in->yyt21;
	in->yyt34 = in->yyt20;
	in->yyt33 = in->yyt20;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt31 = in->yyt25;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt29 = in->yyt24;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt27 = in->yyt23;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel16:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy24;
		case 'b': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel16;
			}
			goto yy5;
	}
yy20:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt35 = in->yyt21;
	in->yyt34 = in->yyt20;
	in->yyt33 = in->yyt20;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt31 = in->yyt25;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt29 = in->yyt24;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt27 = in->yyt23;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel17:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy24;
		case 'b': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel17;
			}
			goto yy5;
	}
yy21:
	++in->cur;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt8 = in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel18:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy26;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel18;
			}
			goto yy5;
	}
yy22:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt36 = in->yyt21;
	in->yyt50 = in->yyt44;
	in->yyt34 = in->yyt20;
	in->yyt49 = in->yyt43;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt48 = in->yyt42;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt47 = in->yyt41;
	in->yyt2 = in->yyt9;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt46 = in->yyt40;
	in->yyt1 = in->yyt8;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt45 = in->yyt39;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt12 = in->yyt13 = in->cur - 1;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->cur - 1;
yyFillLabel19:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy22;
		case 'b': goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel19;
			}
			goto yy5;
	}
yy23:
	++in->cur;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt25 = in->yyt19;
	in->yyt42 = in->yyt31;
	in->yyt24 = in->yyt18;
	in->yyt41 = in->yyt29;
	in->yyt15 = in->yyt11;
	in->yyt23 = in->yyt17;
	in->yyt40 = in->yyt27;
	in->yyt14 = in->yyt10;
	in->yyt22 = in->yyt16;
	in->yyt39 = in->yyt26;
	in->yyt8 = in->yyt12 = in->yyt13 = in->yyt20 = in->yyt21 = in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt11 = in->yyt2;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt10 = in->yyt1;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel20:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy29;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel20;
			}
			goto yy5;
	}
yy24:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt44 = in->yyt35;
	in->yyt34 = in->yyt20;
	in->yyt43 = in->yyt33;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt42 = in->yyt31;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt41 = in->yyt29;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt40 = in->yyt27;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt39 = in->yyt26;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel21:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel21;
			}
			goto yy5;
	}
yy25:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel22:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy31;
		case 'b': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel22;
			}
			goto yy5;
	}
yy26:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt35 = in->yyt21;
	in->yyt34 = in->yyt20;
	in->yyt33 = in->yyt20;
	in->yyt32 = in->yyt25;
	in->yyt31 = in->yyt25;
	in->yyt30 = in->yyt24;
	in->yyt29 = in->yyt24;
	in->yyt28 = in->yyt23;
	in->yyt27 = in->yyt23;
	in->yyt7 = in->yyt22;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel23:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy32;
		case 'b': goto yy33;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel23;
			}
			goto yy5;
	}
yy27:
	++in->cur;
	in->yyt7 = in->yyt52;
	in->yyt6 = in->yyt51;
	in->yyt5 = in->yyt50;
	in->yyt4 = in->yyt49;
	in->yyt3 = in->yyt48;
	in->yyt2 = in->yyt47;
	in->yyt1 = in->yyt46;
	in->yyt8 = in->yyt45;
	a0 = in->yyt8;
	b0 = in->yyt1;
	a1 = in->yyt2;
	b1 = in->yyt3;
	a2 = in->yyt4;
	b2 = in->yyt5;
	a3 = in->yyt6;
	b3 = in->yyt7;
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
        outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
        outs(out, a3, b3); outc(out, '.'); outs(out, b3, in->cur);
        goto loop;
    }
#line 1095 "gen/re2c/24__cat4_2-eof-stadfa.c"
yy28:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt11 = in->yyt2;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt10 = in->yyt1;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel24:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy23;
		case 'b': goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel24;
			}
			goto yy5;
	}
yy29:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt36 = in->yyt21;
	in->yyt50 = in->yyt44;
	in->yyt34 = in->yyt20;
	in->yyt49 = in->yyt43;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt48 = in->yyt42;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt47 = in->yyt41;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt46 = in->yyt40;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt45 = in->yyt39;
	in->yyt38 = in->cur - 1;
	in->yyt37 = in->yyt8;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel25:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy30;
		case 'b': goto yy34;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel25;
			}
			goto yy5;
	}
yy30:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt36 = in->yyt21;
	in->yyt50 = in->yyt44;
	in->yyt34 = in->yyt20;
	in->yyt49 = in->yyt43;
	in->yyt6 = in->yyt13;
	in->yyt32 = in->yyt25;
	in->yyt48 = in->yyt42;
	in->yyt5 = in->yyt12;
	in->yyt30 = in->yyt24;
	in->yyt47 = in->yyt41;
	in->yyt4 = in->yyt15;
	in->yyt28 = in->yyt23;
	in->yyt46 = in->yyt40;
	in->yyt3 = in->yyt14;
	in->yyt7 = in->yyt22;
	in->yyt45 = in->yyt39;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt20 = in->yyt21 = in->cur - 1;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt13;
	in->yyt18 = in->yyt12;
	in->yyt17 = in->yyt15;
	in->yyt16 = in->yyt14;
	in->yyt13 = in->cur - 1;
	in->yyt12 = in->yyt8;
	in->yyt15 = in->yyt11;
	in->yyt14 = in->yyt10;
	in->yyt11 = in->yyt2;
	in->yyt10 = in->yyt1;
yyFillLabel26:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy30;
		case 'b': goto yy34;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel26;
			}
			goto yy5;
	}
yy31:
	++in->cur;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt25 = in->yyt19;
	in->yyt42 = in->yyt31;
	in->yyt24 = in->yyt18;
	in->yyt41 = in->yyt29;
	in->yyt23 = in->yyt17;
	in->yyt40 = in->yyt27;
	in->yyt22 = in->yyt16;
	in->yyt39 = in->yyt26;
	in->yyt8 = in->yyt20 = in->yyt21 = in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel27:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy35;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel27;
			}
			goto yy5;
	}
yy32:
	++in->cur;
	in->yyt36 = in->yyt21;
	in->yyt44 = in->yyt35;
	in->yyt34 = in->yyt20;
	in->yyt43 = in->yyt33;
	in->yyt32 = in->yyt25;
	in->yyt42 = in->yyt31;
	in->yyt30 = in->yyt24;
	in->yyt41 = in->yyt29;
	in->yyt28 = in->yyt23;
	in->yyt40 = in->yyt27;
	in->yyt7 = in->yyt22;
	in->yyt39 = in->yyt26;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel28:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy36;
		case 'b': goto yy33;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel28;
			}
			goto yy5;
	}
yy33:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt31 = in->yyt32;
	in->yyt29 = in->yyt30;
	in->yyt27 = in->yyt28;
	in->yyt26 = in->yyt7;
yyFillLabel29:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy33;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel29;
			}
			goto yy5;
	}
yy34:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt19 = in->yyt6;
	in->yyt31 = in->yyt32;
	in->yyt18 = in->yyt5;
	in->yyt29 = in->yyt30;
	in->yyt17 = in->yyt4;
	in->yyt27 = in->yyt28;
	in->yyt16 = in->yyt3;
	in->yyt26 = in->yyt7;
yyFillLabel30:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy31;
		case 'b': goto yy34;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel30;
			}
			goto yy5;
	}
yy35:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt36 = in->yyt21;
	in->yyt50 = in->yyt44;
	in->yyt34 = in->yyt20;
	in->yyt49 = in->yyt43;
	in->yyt32 = in->yyt25;
	in->yyt48 = in->yyt42;
	in->yyt30 = in->yyt24;
	in->yyt47 = in->yyt41;
	in->yyt28 = in->yyt23;
	in->yyt46 = in->yyt40;
	in->yyt7 = in->yyt22;
	in->yyt45 = in->yyt39;
	in->yyt38 = in->cur - 1;
	in->yyt37 = in->yyt8;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel31:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy36;
		case 'b': goto yy38;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel31;
			}
			goto yy5;
	}
yy36:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt36 = in->yyt21;
	in->yyt50 = in->yyt44;
	in->yyt34 = in->yyt20;
	in->yyt49 = in->yyt43;
	in->yyt32 = in->yyt25;
	in->yyt48 = in->yyt42;
	in->yyt30 = in->yyt24;
	in->yyt47 = in->yyt41;
	in->yyt28 = in->yyt23;
	in->yyt46 = in->yyt40;
	in->yyt7 = in->yyt22;
	in->yyt45 = in->yyt39;
	in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt21;
	in->yyt33 = in->yyt20;
	in->yyt31 = in->yyt25;
	in->yyt29 = in->yyt24;
	in->yyt27 = in->yyt23;
	in->yyt26 = in->yyt22;
	in->yyt21 = in->cur - 1;
	in->yyt20 = in->yyt8;
	in->yyt25 = in->yyt19;
	in->yyt24 = in->yyt18;
	in->yyt23 = in->yyt17;
	in->yyt22 = in->yyt16;
	in->yyt19 = in->yyt6;
	in->yyt18 = in->yyt5;
	in->yyt17 = in->yyt4;
	in->yyt16 = in->yyt3;
yyFillLabel32:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy36;
		case 'b': goto yy38;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel32;
			}
			goto yy5;
	}
yy37:
	++in->cur;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt8 = in->yyt37 = in->yyt38 = in->cur - 1;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt31 = in->yyt32;
	in->yyt29 = in->yyt30;
	in->yyt27 = in->yyt28;
	in->yyt26 = in->yyt7;
yyFillLabel33:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy39;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel33;
			}
			goto yy5;
	}
yy38:
	++in->cur;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt31 = in->yyt32;
	in->yyt29 = in->yyt30;
	in->yyt27 = in->yyt28;
	in->yyt26 = in->yyt7;
yyFillLabel34:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy37;
		case 'b': goto yy38;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel34;
			}
			goto yy5;
	}
yy39:
	++in->cur;
	in->yyt52 = in->yyt38;
	in->yyt51 = in->yyt37;
	in->yyt50 = in->yyt44;
	in->yyt49 = in->yyt43;
	in->yyt48 = in->yyt42;
	in->yyt47 = in->yyt41;
	in->yyt46 = in->yyt40;
	in->yyt45 = in->yyt39;
	in->yyt38 = in->cur - 1;
	in->yyt37 = in->yyt8;
	in->yyt44 = in->yyt35;
	in->yyt43 = in->yyt33;
	in->yyt42 = in->yyt31;
	in->yyt41 = in->yyt29;
	in->yyt40 = in->yyt27;
	in->yyt39 = in->yyt26;
	in->yyt35 = in->yyt36;
	in->yyt33 = in->yyt34;
	in->yyt31 = in->yyt32;
	in->yyt29 = in->yyt30;
	in->yyt27 = in->yyt28;
	in->yyt26 = in->yyt7;
yyFillLabel35:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'a': goto yy39;
		case 'b': goto yy40;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel35;
			}
			goto yy5;
	}
yy40:
	++in->cur;
yyFillLabel36:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy27;
		case 'b': goto yy40;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel36;
			}
			goto yy5;
	}
yy41:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 1562 "gen/re2c/24__cat4_2-eof-stadfa.c"
}
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"

}
