/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		case 'c': goto yy8;
		default: goto yy2;
	}
yy1:
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy3:
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy4;
		default: goto yy2;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0: goto yy1;
		case 1: goto yy7;
		default: goto yy14;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm3 = yytm2;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy9;
		case 'c': goto yy10;
		default: goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		default: goto yy7;
	}
yy7:
	{}
yy8:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy3;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	switch (yych) {
		case 'b':
		case 'c': goto yy11;
		default: goto yy4;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy11;
		case 'c': goto yy12;
		default: goto yy2;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy13;
		default: goto yy4;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy13;
		case 'c': goto yy15;
		default: goto yy2;
	}
yy13:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm2 = yytm3;
	yytm1 = yytm3;
	switch (yych) {
		case 'a': goto yy5;
		case 'b':
		case 'c': goto yy13;
		default: goto yy2;
	}
yy14:
	t = yytm1;
	{}
yy15:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm1 = yytm3;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy13;
		case 'c': goto yy15;
		default: goto yy2;
	}
}

