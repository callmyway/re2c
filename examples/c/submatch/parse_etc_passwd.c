/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define YYMAXFILL 4


static int lex(const char *YYCURSOR) {
    const char *YYMARKER, *n, *p, *u, *g, *f, *h, *c;
    const char *yyt1;const char *yyt2;const char *yyt3;const char *yyt4;const char *yyt5;const char *yyt6;const char *yyt7;

    for (;;) {
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy1;
		case '\n':
		case ':': goto yy4;
		default:
			yyt1 = YYCURSOR;
			goto yy2;
	}
yy1:
	++YYCURSOR;
	{ return 0; }
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x00:
		case '\n': goto yy3;
		default: goto yy6;
	}
yy3:
	{ fprintf(stderr, "error\n"); return 1; }
yy4:
	++YYCURSOR;
	goto yy3;
yy5:
	yych = *++YYCURSOR;
yy6:
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':': goto yy8;
		default: goto yy5;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':':
			yyt2 = YYCURSOR;
			goto yy10;
		default:
			yyt2 = YYCURSOR;
			goto yy9;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':': goto yy10;
		default: goto yy9;
	}
yy10:
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
			yyt3 = YYCURSOR;
			goto yy11;
		default: goto yy7;
	}
yy11:
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
		case '9': goto yy11;
		case ':': goto yy12;
		default: goto yy7;
	}
yy12:
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
			yyt4 = YYCURSOR;
			goto yy13;
		default: goto yy7;
	}
yy13:
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
		case '9': goto yy13;
		case ':': goto yy14;
		default: goto yy7;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':':
			yyt5 = YYCURSOR;
			goto yy16;
		default:
			yyt5 = YYCURSOR;
			goto yy15;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':': goto yy16;
		default: goto yy15;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case '/':
			yyt6 = YYCURSOR;
			goto yy17;
		default: goto yy7;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case '\n': goto yy7;
		case ':': goto yy18;
		default: goto yy17;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case '/':
			yyt7 = YYCURSOR;
			goto yy19;
		default: goto yy7;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
		case ':': goto yy7;
		case '\n': goto yy20;
		default: goto yy19;
	}
yy20:
	++YYCURSOR;
	n = yyt1;
	p = yyt2;
	u = yyt3;
	g = yyt4;
	f = yyt5;
	h = yyt6;
	c = yyt7;
	{
            fprintf(stderr, "user:     %.*s\n", (int)(p - n) - 1, n);
            fprintf(stderr, "password: %.*s\n", (int)(u - p) - 1, p);
            fprintf(stderr, "UID:      %.*s\n", (int)(g - u) - 1, u);
            fprintf(stderr, "GID:      %.*s\n", (int)(f - g) - 1, g);
            fprintf(stderr, "info:     %.*s\n", (int)(h - f) - 1, f);
            fprintf(stderr, "home:     %.*s\n", (int)(c - h) - 1, h);
            fprintf(stderr, "command:  %.*s\n", (int)(YYCURSOR - c - 1), c);
            fprintf(stderr, "\n");
            continue;
        }
}
}
}

int main() {
    const char *fname = "etc_passwd";
    FILE *f;

    // prepare input file
    f = fopen(fname, "w");
    fprintf(f,
        "root:x:0:0:root:/root:/bin/bash\n"
        "bin:x:1:1:bin:/bin:/bin/false\n"
        "portage:x:250:250:portage:/var/tmp/portage:/bin/false\n");
    fclose(f);

    // read input file into buffer
    f = fopen(fname, "r");
    fseek(f, 0, SEEK_END);
    const size_t fsize = (size_t) ftell(f);
    fseek(f, 0, SEEK_SET);
    char *buffer = (char*) malloc(fsize + 1);
    fread(buffer, 1, fsize, f);
    buffer[fsize] = 0;
    fclose(f);

    assert(lex(buffer) == 0);

    // cleanup
    remove(fname);
    free(buffer);
    return 0;
}
