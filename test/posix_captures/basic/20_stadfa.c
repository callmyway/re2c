/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 0x00:
			yyt2 = yyt7 = yyt9 = yyt10 = NULL;
			yyt1 = YYCURSOR;
			goto yy1;
		case 'a': goto yy4;
		default: goto yy2;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt9;
	yypmatch[4] = yyt10;
	yypmatch[5] = yyt7;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt9 = NULL;
	yyt3 = yyt4 = yyt7 = yyt10 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt2 = yyt7 = yyt9 = yyt10 = NULL;
			yyt1 = YYCURSOR;
			goto yy1;
		case 1:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		default:
			yyt7 = YYCURSOR;
			goto yy1;
	}
yy4:
	yych = *++YYCURSOR;
	yyt2 = yyt9 = NULL;
	yyt1 = yyt3 = yyt4 = yyt5 = yyt7 = yyt10 = YYCURSOR - 1;
	switch (yych) {
		case 0x00:
			yyt7 = YYCURSOR;
			goto yy1;
		case 'a': goto yy7;
		default: goto yy6;
	}
yy5:
	yych = *++YYCURSOR;
	yyt8 = yyt4;
	yyt6 = yyt3;
	if (yych <= 0x00) goto yy3;
	goto yy8;
yy6:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt11 = yyt5;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy10;
		default: goto yy9;
	}
yy7:
	yych = *++YYCURSOR;
	yyt8 = yyt4;
	yyt2 = yyt4;
	yyt6 = yyt3;
	yyt11 = yyt5;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy12;
		default: goto yy11;
	}
yy8:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt8;
	yyt11 = yyt6;
	yyt1 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy10;
		default: goto yy13;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt11;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		default: goto yy3;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt11;
	yyt5 = yyt11;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy3;
		case 'a': goto yy15;
		default: goto yy6;
	}
yy11:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt8;
	yyt11 = yyt6;
	yyt1 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy16;
		default: goto yy13;
	}
yy12:
	yych = *++YYCURSOR;
	yyt2 = yyt8;
	yyt5 = yyt11;
	yyt1 = yyt6;
	yyt4 = YYCURSOR - 1;
	yyt11 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy18;
		default: goto yy17;
	}
yy13:
	yych = *++YYCURSOR;
	yyt3 = yyt11;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy3;
		case 'a': goto yy20;
		default: goto yy19;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt8 = yyt4;
	yyt6 = yyt3;
	if (yych <= 0x00) goto yy3;
	goto yy21;
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt8 = yyt4;
	yyt2 = yyt4;
	yyt6 = yyt3;
	yyt11 = yyt5;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy23;
		default: goto yy22;
	}
yy16:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt5 = yyt11;
	yyt4 = YYCURSOR - 1;
	yyt3 = yyt11;
	switch (yych) {
		case 0x00: goto yy3;
		case 'a': goto yy15;
		default: goto yy6;
	}
yy17:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt3 = yyt11;
	yyt1 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt11 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy25;
		default: goto yy24;
	}
yy18:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt3 = yyt11;
	yyt5 = yyt11;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy27;
		default: goto yy26;
	}
yy19:
	++YYCURSOR;
	yyt2 = yyt9;
	yyt1 = yyt7;
	yyt7 = YYCURSOR;
	goto yy1;
yy20:
	yych = *++YYCURSOR;
	yyt8 = yyt4;
	yyt2 = yyt9;
	yyt6 = yyt3;
	yyt1 = yyt7;
	if (yych <= 0x00) {
		yyt7 = YYCURSOR;
		goto yy1;
	}
yy21:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt11 = yyt6;
	yyt1 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy10;
		default: goto yy9;
	}
yy22:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt11 = yyt6;
	yyt1 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy16;
		default: goto yy9;
	}
yy23:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt5 = yyt11;
	yyt1 = yyt6;
	yyt4 = YYCURSOR - 1;
	yyt11 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy18;
		default: goto yy28;
	}
yy24:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt9;
	yyt3 = yyt11;
	yyt1 = yyt7;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		default:
			yyt7 = YYCURSOR;
			goto yy1;
	}
yy25:
	yych = *++YYCURSOR;
	yyt8 = yyt4;
	yyt2 = yyt9;
	yyt6 = yyt3;
	yyt1 = yyt7;
	yyt4 = YYCURSOR - 1;
	yyt3 = yyt11;
	switch (yych) {
		case 0x00:
			yyt7 = YYCURSOR;
			goto yy1;
		case 'a': goto yy29;
		default: goto yy21;
	}
yy26:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt11 = yyt5;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy16;
		default: goto yy9;
	}
yy27:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt8 = yyt4;
	yyt2 = yyt4;
	yyt6 = yyt3;
	yyt1 = yyt5;
	yyt11 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy23;
		default: goto yy22;
	}
yy28:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt3 = yyt11;
	yyt1 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt11 = yyt5;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy30;
		default: goto yy9;
	}
yy29:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt11 = yyt6;
	yyt1 = yyt6;
	yyt8 = yyt4;
	yyt6 = yyt3;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy32;
		default: goto yy31;
	}
yy30:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt8 = yyt4;
	yyt6 = yyt3;
	yyt4 = YYCURSOR - 1;
	yyt3 = yyt11;
	switch (yych) {
		case 0x00: goto yy3;
		case 'a': goto yy29;
		default: goto yy21;
	}
yy31:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt3 = yyt11;
	yyt1 = yyt6;
	yyt4 = YYCURSOR - 1;
	yyt11 = yyt6;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy30;
		default: goto yy9;
	}
yy32:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt8;
	yyt3 = yyt11;
	yyt5 = yyt11;
	yyt1 = yyt6;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00:
			yyt7 = yyt10 = NULL;
			yyt9 = YYCURSOR;
			goto yy1;
		case 'a': goto yy27;
		default: goto yy26;
	}
}

posix_captures/basic/20_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/20_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/basic/20_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
