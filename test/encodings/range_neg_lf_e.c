/* Generated by re2c */
#line 1 "encodings/range_neg_lf_e.re"
// re2c $INPUT -o $OUTPUT -e

#line 6 "encodings/range_neg_lf_e.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x25: goto yy1;
		default: goto yy2;
	}
yy1:
yy2:
	++YYCURSOR;
#line 3 "encodings/range_neg_lf_e.re"
	{return 0;}
#line 20 "encodings/range_neg_lf_e.c"
}
#line 4 "encodings/range_neg_lf_e.re"

encodings/range_neg_lf_e.re:2:0: warning: control flow is undefined for strings that match '\x25', use default rule '*' [-Wundefined-control-flow]
