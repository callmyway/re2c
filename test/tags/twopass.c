/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// need two passes in liveness analyses for chains of copy commands:
// same version may occur as both LHS and RHS, e.g. 'x = y; y = z;'


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt3 = YYCURSOR;
			goto yy4;
		case 'b':
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy6;
		default: goto yy2;
	}
yy1:
	s = yyt4;
	r = yyt4;
	if (yyt4 != NULL) r -= 1;
	{}
yy2:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy3:
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy9;
		default: goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy10;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt4 = NULL;
			goto yy1;
		case 1:
			yyt4 = YYCURSOR;
			goto yy1;
		case 2: goto yy7;
		default: goto yy1;
	}
yy6:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy3;
yy7:
	p = yyt3;
	q = yyt1;
	y = yyt2;
	{}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy5;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy11;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy9;
		default: goto yy2;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy13;
		case 'b':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy12;
	}
yy11:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy9;
		default: goto yy2;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy14;
		default: goto yy12;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt3 = NULL;
			goto yy15;
		case 'b':
			yyt3 = NULL;
			yyt1 = yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt3 = NULL;
			yyt1 = yyt2 = YYCURSOR;
			goto yy12;
	}
yy14:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy14;
		default: goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy16;
		default: goto yy5;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy12;
	}
}

tags/twopass.re:8:29: warning: rule matches empty string [-Wmatch-empty-string]
tags/twopass.re:7:42: warning: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:7:42: warning: tag 'q' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:7:42: warning: tag 'y' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass.re:8:29: warning: tag 's' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
