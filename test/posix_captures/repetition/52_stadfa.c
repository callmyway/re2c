/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'X': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy3;
		case 'Y': goto yy5;
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
		case 'Y': goto yy9;
		default: goto yy8;
	}
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy6;
		case 'Y': goto yy9;
		default: goto yy7;
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
	yyt5 = YYCURSOR - 1;
yy8:
	switch (yych) {
		case 0x00: goto yy3;
		case 'Y': goto yy10;
		default: goto yy7;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy6;
		case 'Y': goto yy10;
		default: goto yy7;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy6;
		case 'Y': goto yy10;
		default: goto yy7;
	}
}

posix_captures/repetition/52_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
