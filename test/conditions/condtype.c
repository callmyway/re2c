/* Generated by re2c */
#line 1 "conditions/condtype.re"
// re2c $INPUT -o $OUTPUT -cs --header condtype_s.h
int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 11 "conditions/condtype.c"
{
	unsigned char yych;
	if (YYGETCONDITION() < 1) {
		goto yyc_a;
	} else {
		goto yyc_b;
	}
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy1;
yy1:
	++YYCURSOR;
#line 10 "conditions/condtype.re"
	{}
#line 27 "conditions/condtype.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy3;
yy3:
	++YYCURSOR;
#line 11 "conditions/condtype.re"
	{}
#line 36 "conditions/condtype.c"
}
#line 12 "conditions/condtype.re"

	return 0;
}
/* Generated by re2c */

enum YYCONDTYPE {
	yyca,
	yycb,
};
conditions/condtype.re:7:0: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype.re:7:0: warning: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
