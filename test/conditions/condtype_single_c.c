/* Generated by re2c */
#line 1 "conditions/condtype_single_c.re"
// re2c $INPUT -o $OUTPUT -c

#line 6 "conditions/condtype_single_c.c"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yyca: goto yyc_a;
	}
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
yy2:
	++YYCURSOR;
#line 3 "conditions/condtype_single_c.re"
	{}
#line 25 "conditions/condtype_single_c.c"
}
#line 4 "conditions/condtype_single_c.re"

conditions/condtype_single_c.re:2:0: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
