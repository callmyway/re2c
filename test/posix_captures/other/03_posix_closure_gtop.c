/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --posix-closure gtop

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
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
	++YYCURSOR;
	yyt1 = NULL;
	yynmatch = 2;
	yypmatch[3] = yyt1;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	if (yyt1 != NULL) yypmatch[2] -= 1;
	{}
}

posix_captures/other/03_posix_closure_gtop.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
