/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'X':
			yyt1 = YYCURSOR;
			goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00: goto yy3;
		case 'Y':
			yyt2 = yyt3 = YYCURSOR;
			goto yy5;
		default: goto yy4;
	}
yy3:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy1;
	} else {
		goto yy6;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'Y':
			yyt3 = yyt4 = YYCURSOR;
			goto yy9;
		default: goto yy8;
	}
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x00: goto yy6;
		case 'Y':
			yyt3 = yyt4 = YYCURSOR;
			goto yy9;
		default:
			yyt4 = YYCURSOR;
			goto yy7;
	}
yy6:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy8:
	switch (yych) {
		case 0x00: goto yy3;
		case 'Y':
			yyt2 = yyt3 = YYCURSOR;
			goto yy10;
		default:
			yyt4 = YYCURSOR;
			goto yy7;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'Y':
			yyt2 = yyt3 = YYCURSOR;
			goto yy10;
		default: goto yy11;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy11:
	switch (yych) {
		case 0x00:
			yyt2 = yyt4;
			goto yy6;
		case 'Y':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy10;
		default:
			yyt2 = yyt4;
			yyt4 = YYCURSOR;
			goto yy7;
	}
}

posix_captures/repetition/52.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
