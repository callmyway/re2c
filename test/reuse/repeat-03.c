/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cgi
// multiple scanners

enum YYCONDTYPE {
	yycr1,
	yycr2,
};


void scan(unsigned char* in)
{

{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	{
		static void *yytarget[256] = {
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy1, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy3, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy4, &&yy5, &&yy6, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2,
			&&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2, &&yy2
		};
		goto *yytarget[yych];
	}
yy1:
yy2:
	++YYCURSOR;
	{ return "."; }
yy3:
	++YYCURSOR;
	{ return "1"; }
yy4:
	++YYCURSOR;
	{ return "a"; }
yy5:
	++YYCURSOR;
	{ return "b"; }
yy6:
	++YYCURSOR;
	{ return "c"; }
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '`') {
		if (yych != '\n') goto yy8;
	} else {
		if (yych <= 'a') goto yy9;
		if (yych == 'c') goto yy10;
		goto yy8;
	}
yy8:
	++YYCURSOR;
	{ return "."; }
yy9:
	++YYCURSOR;
	{ return "a"; }
yy10:
	++YYCURSOR;
	{ return "c"; }
}


}

void scan(unsigned short* in)
{

{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	{
		static void *yytarget[256] = {
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy12, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy14, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy15, &&yy16, &&yy17, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13,
			&&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13, &&yy13
		};
		goto *yytarget[yych];
	}
yy12:
yy13:
	++YYCURSOR;
	{ return "."; }
yy14:
	++YYCURSOR;
	{ return "2"; }
yy15:
	++YYCURSOR;
	{ return "a"; }
yy16:
	++YYCURSOR;
	{ return "b"; }
yy17:
	++YYCURSOR;
	{ return "c"; }
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '`') {
		if (yych != '\n') goto yy19;
	} else {
		if (yych <= 'a') goto yy20;
		if (yych == 'c') goto yy21;
		goto yy19;
	}
yy19:
	++YYCURSOR;
	{ return "."; }
yy20:
	++YYCURSOR;
	{ return "a"; }
yy21:
	++YYCURSOR;
	{ return "c"; }
}

}
reuse/repeat-03.re:15:2: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-03.re:15:2: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-03.re:25:0: warning: control flow in condition 'r1' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
reuse/repeat-03.re:25:0: warning: control flow in condition 'r2' is undefined for strings that match '\xA', use default rule '*' [-Wundefined-control-flow]
