/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy4;
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
		case 'a': goto yy5;
		case 'b': goto yy6;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	yyt4 = yyt5 = yyt7 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default: goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	yyt5 = yyt7 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	yyt8 = yyt5;
	yyt6 = yyt4;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy8;
		default: goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	yyt11 = yyt8;
	yyt10 = yyt7;
	yyt9 = yyt6;
	yyt8 = yyt5;
	yyt6 = yyt4;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy3;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt11;
	yyt2 = yyt10;
	yyt1 = yyt9;
	yyt11 = yyt8;
	yyt10 = yyt7;
	yyt9 = yyt6;
	yyt8 = yyt5;
	yyt6 = yyt4;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy10;
	}
yy10:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = YYCURSOR - 3;
	{}
}

posix_captures/basic/06_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
