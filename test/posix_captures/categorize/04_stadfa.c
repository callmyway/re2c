/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy4;
		case 'c': goto yy5;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy7;
		case 'c': goto yy5;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	yyt2 = YYCURSOR - 1;
yy6:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy3;
	}
yy8:
	++YYCURSOR;
	goto yy6;
}

posix_captures/categorize/04_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
