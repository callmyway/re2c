/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) goto yy2;
	yyt2 = yyt3 = yyt7 = NULL;
	yyt1 = yyt6 = YYCURSOR;
yy1:
	yynmatch = 7;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[8] = yyt6;
	yypmatch[11] = yyt7;
	yypmatch[13] = yyt7;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt6;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 3;
	yypmatch[9] = YYCURSOR;
	yypmatch[10] = yyt7;
	if (yyt7 != NULL) yypmatch[10] -= 2;
	yypmatch[12] = yyt7;
	if (yyt7 != NULL) yypmatch[12] -= 3;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt6 = NULL;
	yyt3 = yyt4 = YYCURSOR - 1;
	if (yych >= 0x01) goto yy3;
	YYCURSOR = YYMARKER;
	yyt2 = yyt3 = yyt7 = NULL;
	yyt1 = yyt6 = YYCURSOR;
	goto yy1;
yy3:
	yych = *++YYCURSOR;
	yyt7 = yyt3;
	yyt5 = yyt4;
	yyt1 = yyt3;
	if (yych <= 0x00) {
		yyt3 = yyt7 = NULL;
		yyt2 = yyt6 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	yyt2 = yyt6;
	yyt4 = yyt7;
	yyt1 = yyt5;
	yyt6 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt7 = NULL;
		yyt3 = yyt6 = YYCURSOR;
		goto yy1;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt5 = yyt4;
	yyt1 = yyt3;
	yyt7 = yyt3;
	if (yych <= 0x00) {
		yyt3 = yyt7 = NULL;
		yyt2 = yyt6 = YYCURSOR;
		goto yy1;
	}
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt6;
	yyt1 = yyt5;
	yyt6 = YYCURSOR - 1;
	yyt4 = yyt7;
	if (yych <= 0x00) {
		yyt7 = NULL;
		yyt3 = yyt6 = YYCURSOR;
		goto yy1;
	}
	goto yy4;
}

posix_captures/glennfowler/44_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/44_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/44_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
