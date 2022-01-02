// Code generated by re2c, DO NOT EDIT.
//line "go/eof/03_eof_rule.re":1
//go:generate re2go $INPUT -o $OUTPUT
package main

// Expects a null-terminated string.
func lex(str string) int {
	var cursor, marker int
	limit := len(str) - 1 // limit points at the terminating null
	count := 0

	for {
//line "go/eof/03_eof_rule.go":14
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case ' ':
		goto yy3
	case '\'':
		goto yy5
	default:
		if (limit <= cursor) {
			goto yy10
		}
		goto yy1
	}
yy1:
	cursor += 1
yy2:
//line "go/eof/03_eof_rule.re":20
	{ return -1 }
//line "go/eof/03_eof_rule.go":34
yy3:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case ' ':
		goto yy3
	default:
		goto yy4
	}
yy4:
//line "go/eof/03_eof_rule.re":23
	{ continue }
//line "go/eof/03_eof_rule.go":47
yy5:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	if (yych >= 0x01) {
		goto yy7
	}
	if (limit <= cursor) {
		goto yy2
	}
yy6:
	cursor += 1
	yych = str[cursor]
yy7:
	switch (yych) {
	case '\'':
		goto yy8
	case '\\':
		goto yy9
	default:
		if (limit <= cursor) {
			goto yy11
		}
		goto yy6
	}
yy8:
	cursor += 1
//line "go/eof/03_eof_rule.re":22
	{ count += 1; continue }
//line "go/eof/03_eof_rule.go":77
yy9:
	cursor += 1
	yych = str[cursor]
	if (yych <= 0x00) {
		if (limit <= cursor) {
			goto yy11
		}
		goto yy6
	}
	goto yy6
yy10:
//line "go/eof/03_eof_rule.re":21
	{ return count }
//line "go/eof/03_eof_rule.go":91
yy11:
	cursor = marker
	goto yy2
}
//line "go/eof/03_eof_rule.re":24
}
}

func main() {
	assert_eq := func(x, y int) { if x != y { panic("error") } }
	assert_eq(lex("\000"), 0)
	assert_eq(lex("'qu\000tes' 'are' 'fine: \\'' \000"), 3)
	assert_eq(lex("'unterminated\\'\000"), -1)
}
