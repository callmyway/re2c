/* Generated by re2c */
#line 1 "encodings/unicode_group_No_8_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy ignore
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
No:
	
#line 14 "encodings/unicode_group_No_8_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xC2: goto yy3;
		case 0xE0: goto yy4;
		case 0xE1: goto yy5;
		case 0xE2: goto yy6;
		case 0xE3: goto yy7;
		case 0xEA: goto yy8;
		case 0xF0: goto yy9;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_No_8_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 33 "encodings/unicode_group_No_8_encoding_policy_ignore.c"
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2:
		case 0xB3:
		case 0xB9:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy10;
		default: goto yy2;
	}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA7: goto yy11;
		case 0xAD: goto yy13;
		case 0xAF: goto yy14;
		case 0xB1: goto yy15;
		case 0xB5: goto yy16;
		case 0xBC: goto yy17;
		default: goto yy2;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x8D: goto yy18;
		case 0x9F: goto yy19;
		case 0xA7: goto yy20;
		default: goto yy2;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x81: goto yy21;
		case 0x82: goto yy22;
		case 0x85: goto yy23;
		case 0x86: goto yy24;
		case 0x91: goto yy25;
		case 0x92: goto yy26;
		case 0x93: goto yy27;
		case 0x9D: goto yy28;
		case 0x9E: goto yy29;
		case 0xB3: goto yy30;
		default: goto yy2;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x86: goto yy31;
		case 0x88: goto yy32;
		case 0x89: goto yy33;
		case 0x8A: goto yy34;
		default: goto yy2;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy16;
		default: goto yy2;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x90: goto yy35;
		case 0x91: goto yy36;
		case 0x96: goto yy37;
		case 0x9D: goto yy38;
		case 0x9E: goto yy39;
		case 0x9F: goto yy40;
		default: goto yy2;
	}
yy10:
	++YYCURSOR;
#line 13 "encodings/unicode_group_No_8_encoding_policy_ignore.re"
	{ goto No; }
#line 109 "encodings/unicode_group_No_8_encoding_policy_ignore.c"
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy10;
		default: goto yy12;
	}
yy12:
	YYCURSOR = YYMARKER;
	goto yy2;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7: goto yy10;
		default: goto yy12;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy10;
		default: goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy10;
		default: goto yy12;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5: goto yy10;
		default: goto yy12;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3: goto yy10;
		default: goto yy12;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xBC: goto yy10;
		default: goto yy12;
	}
yy19:
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
		case 0xB9: goto yy10;
		default: goto yy12;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9A: goto yy10;
		default: goto yy12;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy10;
		default: goto yy12;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89: goto yy10;
		default: goto yy12;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
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
		case 0x9F: goto yy10;
		default: goto yy12;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x89: goto yy10;
		default: goto yy12;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xBE:
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
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
		case 0x9B: goto yy10;
		default: goto yy12;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xBE:
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93: goto yy10;
		default: goto yy12;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBD: goto yy10;
		default: goto yy12;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95: goto yy10;
		default: goto yy12;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9: goto yy10;
		default: goto yy12;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
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
		case 0x9F: goto yy10;
		default: goto yy12;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
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
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy41;
		case 0x85: goto yy42;
		case 0x86: goto yy43;
		case 0x8B: goto yy44;
		case 0x8C: goto yy45;
		case 0xA1: goto yy46;
		case 0xA2: goto yy47;
		case 0xA4: goto yy48;
		case 0xA9: goto yy49;
		case 0xAA: goto yy50;
		case 0xAB: goto yy51;
		case 0xAD: goto yy52;
		case 0xAE: goto yy53;
		case 0xB9: goto yy54;
		default: goto yy12;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81: goto yy55;
		case 0x87: goto yy56;
		case 0xA3: goto yy57;
		default: goto yy12;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAD: goto yy58;
		default: goto yy12;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8D: goto yy59;
		default: goto yy12;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA3: goto yy60;
		default: goto yy12;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy61;
		default: goto yy12;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
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
		case 0xB3: goto yy10;
		default: goto yy12;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy10;
		default: goto yy12;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8A:
		case 0x8B: goto yy10;
		default: goto yy12;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xBB: goto yy10;
		default: goto yy12;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3: goto yy10;
		default: goto yy12;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy10;
		default: goto yy12;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B: goto yy10;
		default: goto yy12;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0xBD:
		case 0xBE: goto yy10;
		default: goto yy12;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy10;
		default: goto yy12;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy10;
		default: goto yy12;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy10;
		default: goto yy12;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy10;
		default: goto yy12;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xBE: goto yy10;
		default: goto yy12;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xA5: goto yy10;
		default: goto yy12;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xB4: goto yy10;
		default: goto yy12;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy10;
		default: goto yy12;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1: goto yy10;
		default: goto yy12;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
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
		case 0xB1: goto yy10;
		default: goto yy12;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F: goto yy10;
		default: goto yy12;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C: goto yy10;
		default: goto yy12;
	}
}
#line 15 "encodings/unicode_group_No_8_encoding_policy_ignore.re"

}
static const unsigned int chars_No [] = {0xb2,0xb3,  0xb9,0xb9,  0xbc,0xbe,  0x9f4,0x9f9,  0xb72,0xb77,  0xbf0,0xbf2,  0xc78,0xc7e,  0xd70,0xd75,  0xf2a,0xf33,  0x1369,0x137c,  0x17f0,0x17f9,  0x19da,0x19da,  0x2070,0x2070,  0x2074,0x2079,  0x2080,0x2089,  0x2150,0x215f,  0x2189,0x2189,  0x2460,0x249b,  0x24ea,0x24ff,  0x2776,0x2793,  0x2cfd,0x2cfd,  0x3192,0x3195,  0x3220,0x3229,  0x3248,0x324f,  0x3251,0x325f,  0x3280,0x3289,  0x32b1,0x32bf,  0xa830,0xa835,  0x10107,0x10133,  0x10175,0x10178,  0x1018a,0x1018b,  0x102e1,0x102fb,  0x10320,0x10323,  0x10858,0x1085f,  0x10879,0x1087f,  0x108a7,0x108af,  0x10916,0x1091b,  0x10a40,0x10a47,  0x10a7d,0x10a7e,  0x10a9d,0x10a9f,  0x10aeb,0x10aef,  0x10b58,0x10b5f,  0x10b78,0x10b7f,  0x10ba9,0x10baf,  0x10e60,0x10e7e,  0x11052,0x11065,  0x111e1,0x111f4,  0x118ea,0x118f2,  0x16b5b,0x16b61,  0x1d360,0x1d371,  0x1e8c7,0x1e8cf,  0x1f100,0x1f10c,  0x0,0x0};
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
	unsigned int * buffer_No = new unsigned int [2284];
	YYCTYPE * s = (YYCTYPE *) buffer_No;
	unsigned int buffer_len = encode_utf8 (chars_No, sizeof (chars_No) / sizeof (unsigned int), buffer_No);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_No[i];
	if (!scan (s, s + buffer_len))
		printf("test 'No' failed\n");
	delete [] buffer_No;
	return 0;
}
