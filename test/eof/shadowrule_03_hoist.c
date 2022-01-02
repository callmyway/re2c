/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// R1 matches any string of two characters (or more). Because of greediness
// ANY rule cannot match on a single-character string (it is shadowed and
// gets eliminated) => tags are hoisted

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR++;
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
yy1:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy1;
		default: goto yy2;
	}
yy2:
	x = yyt1;
	{ /* R1, x must be set */ }
}


// R1 matches any string of two characters (or more). ANY rule is not shadowed
// because with EOF rule YYFILL returns and rolls back to ANY. Untagged
// fallback transition to ANY prevents tag hoisting.

{
	YYCTYPE yych;
yyFillLabel0:
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy4;
	if (YYLIMIT <= YYCURSOR) {
		if (YYFILL() == 0) goto yyFillLabel0;
		goto yy8;
	}
yy4:
	++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	if (yych <= 0x00) {
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel1;
			goto yy5;
		}
		yyt1 = YYCURSOR;
		goto yy6;
	}
	yyt1 = YYCURSOR;
	goto yy6;
yy5:
	{ /* ANY, x must not be set */ }
yy6:
	++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel2;
			}
			goto yy7;
	}
yy7:
	x = yyt1;
	{ /* R1, x must be set */ }
yy8:
	{ /* EOF, x must not be set */ }
}

eof/shadowrule_03_hoist.re:7:16: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
