/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
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
	yyt1 = NULL;
	switch (yych) {
		case 'b': goto yy5;
		case 'c': goto yy7;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy7;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	yyt2 = YYCURSOR;
yy6:
	yynmatch = 3;
	yypmatch[3] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	if (yyt1 != NULL) yypmatch[2] -= 1;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 1;
	{}
yy7:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	yyt2 = NULL;
	goto yy6;
}

posix_captures/basic/12_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
