/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// Tag is nondeterministic: fixed length helps only in top-level


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy7;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	yyt1 = NULL;
yy6:
	p = yyt1;
	{ @p }
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy7;
	default:	goto yy6;
	}
}

tags/ambiguity/cat4.re:5:22: warning: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]