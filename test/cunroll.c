/* Generated by re2c */
#line 1 "cunroll.re"
// re2c $INPUT -o $OUTPUT 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define	ADDEQ	257
#define	ANDAND	258
#define	ANDEQ	259
#define	ARRAY	260
#define	ASM	261
#define	AUTO	262
#define	BREAK	263
#define	CASE	264
#define	CHAR	265
#define	CONST	266
#define	CONTINUE	267
#define	DECR	268
#define	DEFAULT	269
#define	DEREF	270
#define	DIVEQ	271
#define	DO	272
#define	DOUBLE	273
#define	ELLIPSIS	274
#define	ELSE	275
#define	ENUM	276
#define	EQL	277
#define	EXTERN	278
#define	FCON	279
#define	FLOAT	280
#define	FOR	281
#define	FUNCTION	282
#define	GEQ	283
#define	GOTO	284
#define	ICON	285
#define	ID	286
#define	IF	287
#define	INCR	288
#define	INT	289
#define	LEQ	290
#define	LONG	291
#define	LSHIFT	292
#define	LSHIFTEQ	293
#define	MODEQ	294
#define	MULEQ	295
#define	NEQ	296
#define	OREQ	297
#define	OROR	298
#define	POINTER	299
#define	REGISTER	300
#define	RETURN	301
#define	RSHIFT	302
#define	RSHIFTEQ	303
#define	SCON	304
#define	SHORT	305
#define	SIGNED	306
#define	SIZEOF	307
#define	STATIC	308
#define	STRUCT	309
#define	SUBEQ	310
#define	SWITCH	311
#define	TYPEDEF	312
#define	UNION	313
#define	UNSIGNED	314
#define	VOID	315
#define	VOLATILE	316
#define	WHILE	317
#define	XOREQ	318
#define	EOI	319

typedef unsigned int uint;
typedef unsigned char uchar;

#define	BSIZE	8192

#define	YYCTYPE		uchar
#define	YYCURSOR	cursor
#define	YYLIMIT		s->lim
#define	YYMARKER	s->ptr
#define	YYFILL(n)	{cursor = fill(s, cursor);}

#define	RET(i)	{s->cur = cursor; return i;}

typedef struct Scanner {
    int			fd;
    uchar		*bot, *tok, *ptr, *cur, *pos, *lim, *top, *eof;
    uint		line;
} Scanner;

uchar *fill(Scanner *s, uchar *cursor){
    if(!s->eof){
	uint cnt = s->tok - s->bot;
	if(cnt){
	    memcpy(s->bot, s->tok, s->lim - s->tok);
	    s->tok = s->bot;
	    s->ptr -= cnt;
	    cursor -= cnt;
	    s->pos -= cnt;
	    s->lim -= cnt;
	}
	if((s->top - s->lim) < BSIZE){
	    uchar *buf = (uchar*) malloc(((s->lim - s->bot) + BSIZE)*sizeof(uchar));
	    memcpy(buf, s->tok, s->lim - s->tok);
	    s->tok = buf;
	    s->ptr = &buf[s->ptr - s->bot];
	    cursor = &buf[cursor - s->bot];
	    s->pos = &buf[s->pos - s->bot];
	    s->lim = &buf[s->lim - s->bot];
	    s->top = &s->lim[BSIZE];
	    free(s->bot);
	    s->bot = buf;
	}
	if((cnt = read(s->fd, (char*) s->lim, BSIZE)) != BSIZE){
	    s->eof = &s->lim[cnt]; *(s->eof)++ = '\n';
	}
	s->lim += cnt;
    }
    return cursor;
}

int scan(Scanner *s){
	uchar *cursor = s->cur;
std:
	s->tok = cursor;
#line 136 "cunroll.re"



#line 131 "cunroll.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
		case '\t':
		case '\v':
		case '\f':
		case ' ': goto yy3;
		case '\n': goto yy5;
		case '!': goto yy6;
		case '"': goto yy8;
		case '%': goto yy9;
		case '&': goto yy11;
		case '\'': goto yy13;
		case '(': goto yy14;
		case ')': goto yy15;
		case '*': goto yy16;
		case '+': goto yy18;
		case ',': goto yy20;
		case '-': goto yy21;
		case '.': goto yy23;
		case '/': goto yy25;
		case '0': goto yy27;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy29;
		case ':': goto yy31;
		case ';': goto yy32;
		case '<': goto yy33;
		case '=': goto yy35;
		case '>': goto yy37;
		case '?': goto yy39;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy40;
		case '[': goto yy42;
		case ']': goto yy43;
		case '^': goto yy44;
		case '{': goto yy46;
		case '|': goto yy47;
		case '}': goto yy49;
		case '~': goto yy50;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 220 "cunroll.re"
	{
		printf("unexpected character: %c\n", *s->tok);
		goto std;
	    }
#line 242 "cunroll.c"
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '\t':
		case '\v':
		case '\f':
		case ' ': goto yy3;
		default: goto yy4;
	}
yy4:
#line 210 "cunroll.re"
	{ goto std; }
#line 257 "cunroll.c"
yy5:
	++YYCURSOR;
#line 213 "cunroll.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->pos = cursor; s->line++;
		goto std;
	    }
#line 266 "cunroll.c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy51;
		default: goto yy7;
	}
yy7:
#line 196 "cunroll.re"
	{ RET('!'); }
#line 276 "cunroll.c"
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n': goto yy2;
		default: goto yy53;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy57;
		default: goto yy10;
	}
yy10:
#line 202 "cunroll.re"
	{ RET('%'); }
#line 293 "cunroll.c"
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case '&': goto yy58;
		case '=': goto yy59;
		default: goto yy12;
	}
yy12:
#line 195 "cunroll.re"
	{ RET('&'); }
#line 304 "cunroll.c"
yy13:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n': goto yy2;
		default: goto yy61;
	}
yy14:
	++YYCURSOR;
#line 190 "cunroll.re"
	{ RET('('); }
#line 316 "cunroll.c"
yy15:
	++YYCURSOR;
#line 191 "cunroll.re"
	{ RET(')'); }
#line 321 "cunroll.c"
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy64;
		default: goto yy17;
	}
yy17:
#line 200 "cunroll.re"
	{ RET('*'); }
#line 331 "cunroll.c"
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case '+': goto yy65;
		case '=': goto yy66;
		default: goto yy19;
	}
yy19:
#line 199 "cunroll.re"
	{ RET('+'); }
#line 342 "cunroll.c"
yy20:
	++YYCURSOR;
#line 187 "cunroll.re"
	{ RET(','); }
#line 347 "cunroll.c"
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case '-': goto yy67;
		case '=': goto yy68;
		case '>': goto yy69;
		default: goto yy22;
	}
yy22:
#line 198 "cunroll.re"
	{ RET('-'); }
#line 359 "cunroll.c"
yy23:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '.': goto yy70;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy71;
		default: goto yy24;
	}
yy24:
#line 194 "cunroll.re"
	{ RET('.'); }
#line 380 "cunroll.c"
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*': goto yy73;
		case '=': goto yy74;
		default: goto yy26;
	}
yy26:
#line 201 "cunroll.re"
	{ RET('/'); }
#line 391 "cunroll.c"
yy27:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'X':
		case 'x': goto yy77;
		default: goto yy30;
	}
yy28:
#line 154 "cunroll.re"
	{ RET(ICON); }
#line 403 "cunroll.c"
yy29:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
yy30:
	switch (yych) {
		case '.': goto yy71;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy29;
		case 'E':
		case 'e': goto yy75;
		case 'L':
		case 'U':
		case 'l':
		case 'u': goto yy76;
		default: goto yy28;
	}
yy31:
	++YYCURSOR;
#line 188 "cunroll.re"
	{ RET(':'); }
#line 434 "cunroll.c"
yy32:
	++YYCURSOR;
#line 184 "cunroll.re"
	{ RET(';'); }
#line 439 "cunroll.c"
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
		case '<': goto yy78;
		case '=': goto yy80;
		default: goto yy34;
	}
yy34:
#line 203 "cunroll.re"
	{ RET('<'); }
#line 450 "cunroll.c"
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy81;
		default: goto yy36;
	}
yy36:
#line 189 "cunroll.re"
	{ RET('='); }
#line 460 "cunroll.c"
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy82;
		case '>': goto yy83;
		default: goto yy38;
	}
yy38:
#line 204 "cunroll.re"
	{ RET('>'); }
#line 471 "cunroll.c"
yy39:
	++YYCURSOR;
#line 207 "cunroll.re"
	{ RET('?'); }
#line 476 "cunroll.c"
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy85;
		default: goto yy41;
	}
yy41:
#line 142 "cunroll.re"
	{ RET(ID); }
#line 548 "cunroll.c"
yy42:
	++YYCURSOR;
#line 192 "cunroll.re"
	{ RET('['); }
#line 553 "cunroll.c"
yy43:
	++YYCURSOR;
#line 193 "cunroll.re"
	{ RET(']'); }
#line 558 "cunroll.c"
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy87;
		default: goto yy45;
	}
yy45:
#line 205 "cunroll.re"
	{ RET('^'); }
#line 568 "cunroll.c"
yy46:
	++YYCURSOR;
#line 185 "cunroll.re"
	{ RET('{'); }
#line 573 "cunroll.c"
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy88;
		case '|': goto yy89;
		default: goto yy48;
	}
yy48:
#line 206 "cunroll.re"
	{ RET('|'); }
#line 584 "cunroll.c"
yy49:
	++YYCURSOR;
#line 186 "cunroll.re"
	{ RET('}'); }
#line 589 "cunroll.c"
yy50:
	++YYCURSOR;
#line 197 "cunroll.re"
	{ RET('~'); }
#line 594 "cunroll.c"
yy51:
	++YYCURSOR;
#line 183 "cunroll.re"
	{ RET(NEQ); }
#line 599 "cunroll.c"
yy52:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy53:
	switch (yych) {
		case '\n': goto yy54;
		case '"': goto yy55;
		case '\\': goto yy56;
		default: goto yy52;
	}
yy54:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0: goto yy2;
		case 1: goto yy24;
		case 2: goto yy28;
		default: goto yy72;
	}
yy55:
	++YYCURSOR;
#line 160 "cunroll.re"
	{ RET(SCON); }
#line 623 "cunroll.c"
yy56:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '"':
		case '\'':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '?':
		case '\\':
		case 'a':
		case 'b':
		case 'f':
		case 'n':
		case 'r':
		case 't':
		case 'v': goto yy52;
		case 'x': goto yy90;
		default: goto yy54;
	}
yy57:
	++YYCURSOR;
#line 169 "cunroll.re"
	{ RET(MODEQ); }
#line 655 "cunroll.c"
yy58:
	++YYCURSOR;
#line 178 "cunroll.re"
	{ RET(ANDAND); }
#line 660 "cunroll.c"
yy59:
	++YYCURSOR;
#line 170 "cunroll.re"
	{ RET(ANDEQ); }
#line 665 "cunroll.c"
yy60:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy61:
	switch (yych) {
		case '\n': goto yy54;
		case '\'': goto yy62;
		case '\\': goto yy63;
		default: goto yy60;
	}
yy62:
	++YYCURSOR;
	goto yy28;
yy63:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '"':
		case '\'':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '?':
		case '\\':
		case 'a':
		case 'b':
		case 'f':
		case 'n':
		case 'r':
		case 't':
		case 'v': goto yy60;
		case 'x': goto yy91;
		default: goto yy54;
	}
yy64:
	++YYCURSOR;
#line 167 "cunroll.re"
	{ RET(MULEQ); }
#line 711 "cunroll.c"
yy65:
	++YYCURSOR;
#line 175 "cunroll.re"
	{ RET(INCR); }
#line 716 "cunroll.c"
yy66:
	++YYCURSOR;
#line 165 "cunroll.re"
	{ RET(ADDEQ); }
#line 721 "cunroll.c"
yy67:
	++YYCURSOR;
#line 176 "cunroll.re"
	{ RET(DECR); }
#line 726 "cunroll.c"
yy68:
	++YYCURSOR;
#line 166 "cunroll.re"
	{ RET(SUBEQ); }
#line 731 "cunroll.c"
yy69:
	++YYCURSOR;
#line 177 "cunroll.re"
	{ RET(DEREF); }
#line 736 "cunroll.c"
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
		case '.': goto yy92;
		default: goto yy54;
	}
yy71:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy71;
		case 'E':
		case 'e': goto yy75;
		case 'F':
		case 'L':
		case 'f':
		case 'l': goto yy93;
		default: goto yy72;
	}
yy72:
#line 157 "cunroll.re"
	{ RET(FCON); }
#line 770 "cunroll.c"
yy73:
	++YYCURSOR;
#line 139 "cunroll.re"
	{ goto comment; }
#line 775 "cunroll.c"
yy74:
	++YYCURSOR;
#line 168 "cunroll.re"
	{ RET(DIVEQ); }
#line 780 "cunroll.c"
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
		case '+':
		case '-': goto yy94;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy95;
		default: goto yy54;
	}
yy76:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'L':
		case 'U':
		case 'l':
		case 'u': goto yy76;
		default: goto yy28;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy96;
		default: goto yy54;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy97;
		default: goto yy79;
	}
yy79:
#line 174 "cunroll.re"
	{ RET(LSHIFT); }
#line 845 "cunroll.c"
yy80:
	++YYCURSOR;
#line 180 "cunroll.re"
	{ RET(LEQ); }
#line 850 "cunroll.c"
yy81:
	++YYCURSOR;
#line 182 "cunroll.re"
	{ RET(EQL); }
#line 855 "cunroll.c"
yy82:
	++YYCURSOR;
#line 181 "cunroll.re"
	{ RET(GEQ); }
#line 860 "cunroll.c"
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
		case '=': goto yy98;
		default: goto yy84;
	}
yy84:
#line 173 "cunroll.re"
	{ RET(RSHIFT); }
#line 870 "cunroll.c"
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy99;
		default: goto yy86;
	}
yy86:
#line 143 "cunroll.re"
	{ RET(ID); }
#line 942 "cunroll.c"
yy87:
	++YYCURSOR;
#line 171 "cunroll.re"
	{ RET(XOREQ); }
#line 947 "cunroll.c"
yy88:
	++YYCURSOR;
#line 172 "cunroll.re"
	{ RET(OREQ); }
#line 952 "cunroll.c"
yy89:
	++YYCURSOR;
#line 179 "cunroll.re"
	{ RET(OROR); }
#line 957 "cunroll.c"
yy90:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy52;
		default: goto yy54;
	}
yy91:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy60;
		default: goto yy54;
	}
yy92:
	++YYCURSOR;
#line 162 "cunroll.re"
	{ RET(ELLIPSIS); }
#line 1020 "cunroll.c"
yy93:
	++YYCURSOR;
	goto yy72;
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy95;
		default: goto yy54;
	}
yy95:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy95;
		case 'F':
		case 'L':
		case 'f':
		case 'l': goto yy93;
		default: goto yy72;
	}
yy96:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f': goto yy96;
		case 'L':
		case 'U':
		case 'l':
		case 'u': goto yy76;
		default: goto yy28;
	}
yy97:
	++YYCURSOR;
#line 164 "cunroll.re"
	{ RET(LSHIFTEQ); }
#line 1097 "cunroll.c"
yy98:
	++YYCURSOR;
#line 163 "cunroll.re"
	{ RET(RSHIFTEQ); }
#line 1102 "cunroll.c"
yy99:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy101;
		default: goto yy100;
	}
yy100:
#line 144 "cunroll.re"
	{ RET(ID); }
#line 1174 "cunroll.c"
yy101:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy103;
		default: goto yy102;
	}
yy102:
#line 145 "cunroll.re"
	{ RET(ID); }
#line 1246 "cunroll.c"
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy105;
		default: goto yy104;
	}
yy104:
#line 146 "cunroll.re"
	{ RET(ID); }
#line 1318 "cunroll.c"
yy105:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy107;
		default: goto yy106;
	}
yy106:
#line 147 "cunroll.re"
	{ RET(ID); }
#line 1390 "cunroll.c"
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy109;
		default: goto yy108;
	}
yy108:
#line 148 "cunroll.re"
	{ RET(ID); }
#line 1462 "cunroll.c"
yy109:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy111;
		default: goto yy110;
	}
yy110:
#line 149 "cunroll.re"
	{ RET(ID); }
#line 1534 "cunroll.c"
yy111:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy111;
		default: goto yy112;
	}
yy112:
#line 150 "cunroll.re"
	{ RET(ID); }
#line 1608 "cunroll.c"
}
#line 224 "cunroll.re"


comment:

#line 1615 "cunroll.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy116;
		case '*': goto yy118;
		case '/': goto yy120;
		default: goto yy114;
	}
yy114:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy115;
		default: goto yy121;
	}
yy115:
#line 235 "cunroll.re"
	{ goto comment; }
#line 1636 "cunroll.c"
yy116:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy117;
		default: goto yy121;
	}
yy117:
#line 230 "cunroll.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->tok = s->pos = cursor; s->line++;
		goto comment;
	    }
#line 1651 "cunroll.c"
yy118:
	yych = *++YYCURSOR;
	switch (yych) {
		case '/': goto yy123;
		default: goto yy119;
	}
yy119:
#line 243 "cunroll.re"
	{ goto comment; }
#line 1661 "cunroll.c"
yy120:
	++YYCURSOR;
	goto yy119;
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy122;
		default: goto yy124;
	}
yy122:
#line 236 "cunroll.re"
	{ goto comment; }
#line 1675 "cunroll.c"
yy123:
	++YYCURSOR;
#line 228 "cunroll.re"
	{ goto std; }
#line 1680 "cunroll.c"
yy124:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy125;
		default: goto yy126;
	}
yy125:
#line 237 "cunroll.re"
	{ goto comment; }
#line 1691 "cunroll.c"
yy126:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy127;
		default: goto yy128;
	}
yy127:
#line 238 "cunroll.re"
	{ goto comment; }
#line 1702 "cunroll.c"
yy128:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy129;
		default: goto yy130;
	}
yy129:
#line 239 "cunroll.re"
	{ goto comment; }
#line 1713 "cunroll.c"
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy131;
		default: goto yy132;
	}
yy131:
#line 240 "cunroll.re"
	{ goto comment; }
#line 1724 "cunroll.c"
yy132:
	yych = *++YYCURSOR;
	switch (yych) {
		case '*':
		case '/': goto yy133;
		default: goto yy134;
	}
yy133:
#line 241 "cunroll.re"
	{ goto comment; }
#line 1735 "cunroll.c"
yy134:
	++YYCURSOR;
#line 242 "cunroll.re"
	{ goto comment; }
#line 1740 "cunroll.c"
}
#line 244 "cunroll.re"

}

main(){
    Scanner in;
    int t;
    memset((char*) &in, 0, sizeof(in));
    in.fd = 0;
    while((t = scan(&in)) != EOI){
/*
	printf("%d\t%.*s\n", t, in.cur - in.tok, in.tok);
	printf("%d\n", t);
*/
    }
    close(in.fd);
}
