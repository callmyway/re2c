/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt1 = yyt2 = YYCURSOR;
			goto yy3;
		default:
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yypmatch[4] = yyt2;
	yypmatch[3] = yypmatch[5] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy3;
		default:
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy3;
		default:
			yyt3 = YYCURSOR;
			goto yy1;
	}
}

posix_captures/basic/46.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/46.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/46.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
