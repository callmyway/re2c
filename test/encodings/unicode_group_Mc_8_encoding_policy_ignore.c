/* Generated by re2c */
#line 1 "encodings/unicode_group_Mc_8_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy ignore
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Mc:
	
#line 14 "encodings/unicode_group_Mc_8_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xE0: goto yy3;
		case 0xE1: goto yy4;
		case 0xE3: goto yy5;
		case 0xEA: goto yy6;
		case 0xF0: goto yy7;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Mc_8_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 31 "encodings/unicode_group_Mc_8_encoding_policy_ignore.c"
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA4: goto yy8;
		case 0xA5: goto yy10;
		case 0xA6:
		case 0xB4: goto yy11;
		case 0xA7:
		case 0xAD: goto yy12;
		case 0xA8:
		case 0xAA: goto yy13;
		case 0xA9: goto yy14;
		case 0xAB: goto yy15;
		case 0xAC:
		case 0xB2: goto yy16;
		case 0xAE:
		case 0xBC: goto yy17;
		case 0xAF: goto yy18;
		case 0xB0: goto yy19;
		case 0xB1: goto yy20;
		case 0xB3: goto yy21;
		case 0xB5: goto yy22;
		case 0xB6: goto yy23;
		case 0xB7: goto yy24;
		case 0xBD: goto yy25;
		default: goto yy2;
	}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy26;
		case 0x81: goto yy27;
		case 0x82: goto yy28;
		case 0x9E: goto yy29;
		case 0x9F: goto yy30;
		case 0xA4: goto yy31;
		case 0xA6: goto yy32;
		case 0xA7: goto yy33;
		case 0xA8: goto yy34;
		case 0xA9: goto yy35;
		case 0xAC: goto yy36;
		case 0xAD: goto yy37;
		case 0xAE: goto yy38;
		case 0xAF: goto yy39;
		case 0xB0: goto yy40;
		case 0xB3: goto yy41;
		default: goto yy2;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy42;
		default: goto yy2;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy43;
		case 0xA2: goto yy44;
		case 0xA3: goto yy45;
		case 0xA5: goto yy46;
		case 0xA6: goto yy47;
		case 0xA7: goto yy14;
		case 0xA8: goto yy48;
		case 0xA9: goto yy49;
		case 0xAB: goto yy50;
		case 0xAF: goto yy51;
		default: goto yy2;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x91: goto yy52;
		case 0x96: goto yy53;
		case 0x9D: goto yy54;
		default: goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x83:
		case 0xBB:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy9:
	YYCURSOR = YYMARKER;
	goto yy2;
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8E:
		case 0x8F: goto yy55;
		default: goto yy9;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0x83:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x87:
		case 0x88:
		case 0x8B:
		case 0x8C:
		case 0x97: goto yy55;
		default: goto yy9;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x83:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80: goto yy55;
		default: goto yy9;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x89:
		case 0x8B:
		case 0x8C: goto yy55;
		default: goto yy9;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0x83:
		case 0xBE: goto yy55;
		default: goto yy9;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x97: goto yy55;
		default: goto yy9;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83: goto yy55;
		default: goto yy9;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84: goto yy55;
		default: goto yy9;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x87:
		case 0x88:
		case 0x8A:
		case 0x8B:
		case 0x95:
		case 0x96: goto yy55;
		default: goto yy9;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x97: goto yy55;
		default: goto yy9;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0x83: goto yy55;
		default: goto yy9;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xB2:
		case 0xB3: goto yy55;
		default: goto yy9;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB:
		case 0xAC:
		case 0xB1:
		case 0xB8:
		case 0xBB:
		case 0xBC: goto yy55;
		default: goto yy9;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x96:
		case 0x97:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD: goto yy55;
		default: goto yy9;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x83:
		case 0x84:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8F:
		case 0x9A:
		case 0x9B:
		case 0x9C: goto yy55;
		default: goto yy9;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB6:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x87:
		case 0x88: goto yy55;
		default: goto yy9;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xB0:
		case 0xB1:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy55;
		default: goto yy9;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x88:
		case 0x89: goto yy55;
		default: goto yy9;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x99:
		case 0x9A: goto yy55;
		default: goto yy9;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x95:
		case 0x97:
		case 0xA1:
		case 0xA3:
		case 0xA4:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy55;
		default: goto yy9;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84:
		case 0xB5:
		case 0xBB:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x83:
		case 0x84: goto yy55;
		default: goto yy9;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0xA1:
		case 0xA6:
		case 0xA7:
		case 0xAA: goto yy55;
		default: goto yy9;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA7:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAE:
		case 0xB2:
		case 0xB3: goto yy55;
		default: goto yy9;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xB4:
		case 0xB5: goto yy55;
		default: goto yy9;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA1:
		case 0xB2:
		case 0xB3: goto yy55;
		default: goto yy9;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAE:
		case 0xAF: goto yy55;
		default: goto yy9;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA3:
		case 0xA4:
		case 0xA7: goto yy55;
		default: goto yy9;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83: goto yy55;
		default: goto yy9;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x92:
		case 0x93: goto yy55;
		default: goto yy9;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x83:
		case 0xB4:
		case 0xB5:
		case 0xBA:
		case 0xBB:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAF:
		case 0xB0:
		case 0xB3:
		case 0xB4: goto yy55;
		default: goto yy9;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8D:
		case 0xBB:
		case 0xBD: goto yy55;
		default: goto yy9;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB:
		case 0xAE:
		case 0xAF:
		case 0xB5: goto yy55;
		default: goto yy9;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA3:
		case 0xA4:
		case 0xA6:
		case 0xA7:
		case 0xA9:
		case 0xAA:
		case 0xAC: goto yy55;
		default: goto yy9;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80: goto yy56;
		case 0x82: goto yy57;
		case 0x84: goto yy58;
		case 0x86: goto yy59;
		case 0x87: goto yy14;
		case 0x88: goto yy60;
		case 0x8B: goto yy61;
		case 0x8C: goto yy11;
		case 0x8D: goto yy62;
		case 0x92: goto yy63;
		case 0x93: goto yy64;
		case 0x96: goto yy65;
		case 0x98: goto yy66;
		case 0x9A: goto yy67;
		default: goto yy9;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBD: goto yy68;
		default: goto yy9;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85: goto yy69;
		default: goto yy9;
	}
yy55:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Mc_8_encoding_policy_ignore.re"
	{ goto Mc; }
#line 621 "encodings/unicode_group_Mc_8_encoding_policy_ignore.c"
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x82: goto yy55;
		default: goto yy9;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB7:
		case 0xB8: goto yy55;
		default: goto yy9;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAC: goto yy55;
		default: goto yy9;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x82:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xBF: goto yy55;
		default: goto yy9;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xB2:
		case 0xB3:
		case 0xB5: goto yy55;
		default: goto yy9;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2: goto yy55;
		default: goto yy9;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x87:
		case 0x88:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x97:
		case 0xA2:
		case 0xA3: goto yy55;
		default: goto yy9;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB9:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy55;
		default: goto yy9;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81: goto yy55;
		default: goto yy9;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBE: goto yy55;
		default: goto yy9;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xBB:
		case 0xBC:
		case 0xBE: goto yy55;
		default: goto yy9;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAC:
		case 0xAE:
		case 0xAF:
		case 0xB6: goto yy55;
		default: goto yy9;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy55;
		default: goto yy9;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA5:
		case 0xA6:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy55;
		default: goto yy9;
	}
}
#line 15 "encodings/unicode_group_Mc_8_encoding_policy_ignore.re"

}
static const unsigned int chars_Mc [] = {0x903,0x903,  0x93b,0x93b,  0x93e,0x940,  0x949,0x94c,  0x94e,0x94f,  0x982,0x983,  0x9be,0x9c0,  0x9c7,0x9c8,  0x9cb,0x9cc,  0x9d7,0x9d7,  0xa03,0xa03,  0xa3e,0xa40,  0xa83,0xa83,  0xabe,0xac0,  0xac9,0xac9,  0xacb,0xacc,  0xb02,0xb03,  0xb3e,0xb3e,  0xb40,0xb40,  0xb47,0xb48,  0xb4b,0xb4c,  0xb57,0xb57,  0xbbe,0xbbf,  0xbc1,0xbc2,  0xbc6,0xbc8,  0xbca,0xbcc,  0xbd7,0xbd7,  0xc01,0xc03,  0xc41,0xc44,  0xc82,0xc83,  0xcbe,0xcbe,  0xcc0,0xcc4,  0xcc7,0xcc8,  0xcca,0xccb,  0xcd5,0xcd6,  0xd02,0xd03,  0xd3e,0xd40,  0xd46,0xd48,  0xd4a,0xd4c,  0xd57,0xd57,  0xd82,0xd83,  0xdcf,0xdd1,  0xdd8,0xddf,  0xdf2,0xdf3,  0xf3e,0xf3f,  0xf7f,0xf7f,  0x102b,0x102c,  0x1031,0x1031,  0x1038,0x1038,  0x103b,0x103c,  0x1056,0x1057,  0x1062,0x1064,  0x1067,0x106d,  0x1083,0x1084,  0x1087,0x108c,  0x108f,0x108f,  0x109a,0x109c,  0x17b6,0x17b6,  0x17be,0x17c5,  0x17c7,0x17c8,  0x1923,0x1926,  0x1929,0x192b,  0x1930,0x1931,  0x1933,0x1938,  0x19b0,0x19c0,  0x19c8,0x19c9,  0x1a19,0x1a1a,  0x1a55,0x1a55,  0x1a57,0x1a57,  0x1a61,0x1a61,  0x1a63,0x1a64,  0x1a6d,0x1a72,  0x1b04,0x1b04,  0x1b35,0x1b35,  0x1b3b,0x1b3b,  0x1b3d,0x1b41,  0x1b43,0x1b44,  0x1b82,0x1b82,  0x1ba1,0x1ba1,  0x1ba6,0x1ba7,  0x1baa,0x1baa,  0x1be7,0x1be7,  0x1bea,0x1bec,  0x1bee,0x1bee,  0x1bf2,0x1bf3,  0x1c24,0x1c2b,  0x1c34,0x1c35,  0x1ce1,0x1ce1,  0x1cf2,0x1cf3,  0x302e,0x302f,  0xa823,0xa824,  0xa827,0xa827,  0xa880,0xa881,  0xa8b4,0xa8c3,  0xa952,0xa953,  0xa983,0xa983,  0xa9b4,0xa9b5,  0xa9ba,0xa9bb,  0xa9bd,0xa9c0,  0xaa2f,0xaa30,  0xaa33,0xaa34,  0xaa4d,0xaa4d,  0xaa7b,0xaa7b,  0xaa7d,0xaa7d,  0xaaeb,0xaaeb,  0xaaee,0xaaef,  0xaaf5,0xaaf5,  0xabe3,0xabe4,  0xabe6,0xabe7,  0xabe9,0xabea,  0xabec,0xabec,  0x11000,0x11000,  0x11002,0x11002,  0x11082,0x11082,  0x110b0,0x110b2,  0x110b7,0x110b8,  0x1112c,0x1112c,  0x11182,0x11182,  0x111b3,0x111b5,  0x111bf,0x111c0,  0x1122c,0x1122e,  0x11232,0x11233,  0x11235,0x11235,  0x112e0,0x112e2,  0x11302,0x11303,  0x1133e,0x1133f,  0x11341,0x11344,  0x11347,0x11348,  0x1134b,0x1134d,  0x11357,0x11357,  0x11362,0x11363,  0x114b0,0x114b2,  0x114b9,0x114b9,  0x114bb,0x114be,  0x114c1,0x114c1,  0x115af,0x115b1,  0x115b8,0x115bb,  0x115be,0x115be,  0x11630,0x11632,  0x1163b,0x1163c,  0x1163e,0x1163e,  0x116ac,0x116ac,  0x116ae,0x116af,  0x116b6,0x116b6,  0x16f51,0x16f7e,  0x1d165,0x1d166,  0x1d16d,0x1d172,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_Mc = new unsigned int [1600];
	YYCTYPE * s = (YYCTYPE *) buffer_Mc;
	unsigned int buffer_len = encode_utf8 (chars_Mc, sizeof (chars_Mc) / sizeof (unsigned int), buffer_Mc);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Mc[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Mc' failed\n");
	delete [] buffer_Mc;
	return 0;
}
