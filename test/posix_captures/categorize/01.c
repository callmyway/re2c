/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt3 = NULL;
			yyt1 = yyt2 = yyt4 = YYCURSOR;
			goto yy3;
		default:
			yyt3 = NULL;
			yyt1 = yyt2 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt4;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt3;
	if (yyt3 != NULL) yypmatch[4] -= 2;
	yypmatch[7] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b':
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			goto yy6;
		default: goto yy5;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy3;
		default: goto yy1;
	}
yy4:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy5:
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy4;
		case 'b':
			yyt2 = yyt4;
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			goto yy6;
		default:
			yyt3 = NULL;
			yyt2 = yyt4 = YYCURSOR;
			goto yy1;
	}
yy6:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a': goto yy7;
		case 'b':
			yyt2 = yyt4;
			goto yy3;
		default:
			yyt2 = yyt4;
			goto yy1;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt4;
		goto yy1;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy1;
	}
yy9:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		case 'b':
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/categorize/01.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/categorize/01.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/categorize/01.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
