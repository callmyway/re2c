/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// Tag is nondeterministic: fixed length helps only in top-level


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy4;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy6;
		default: goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt1 = NULL;
yy5:
	p = yyt1;
	{ @p }
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy6;
		default: goto yy5;
	}
}

tags/ambiguity/cat4.re:5:22: warning: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
