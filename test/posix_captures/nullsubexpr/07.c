/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00:
		case 'b':
			yyt1 = yyt2 = YYCURSOR;
			goto yy1;
		default:
			yyt1 = YYCURSOR;
			goto yy2;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00:
		case 'b':
			yyt2 = YYCURSOR;
			goto yy1;
		default: goto yy2;
	}
}

posix_captures/nullsubexpr/07.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/07.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/07.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
