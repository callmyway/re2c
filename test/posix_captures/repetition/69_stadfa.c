/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy4;
		case 'c': goto yy6;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy8;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy3:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy4:
	yych = *++YYCURSOR;
	yyt5 = yyt6 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy1;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy3;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy7:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt4 = yyt3;
	yyt2 = YYCURSOR - 1;
	yyt3 = yyt1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy8;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt5 = yyt1;
	yyt3 = yyt4;
	yyt6 = YYCURSOR - 1;
	yyt1 = yyt4;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy13;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy9:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy14;
		default: goto yy3;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy15;
		default: goto yy5;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt5 = yyt1;
	yyt6 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy11;
		default: goto yy5;
	}
yy13:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy15;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy14;
		default: goto yy3;
	}
yy15:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = yyt6;
	yyt1 = yyt5;
	yyt3 = yyt5;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy12;
		case 'c': goto yy9;
		case 'd': goto yy10;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy3;
	}
}

posix_captures/repetition/69_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
