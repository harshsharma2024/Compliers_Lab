final: a.out asgn4_21CS30023_test.c
	./a.out < asgn4_21CS30023_test.c

a.out: lex.yy.c y.tab.c asgn4_21CS30023.c
	gcc lex.yy.c y.tab.c asgn4_21CS30023.c -lfl

y.tab.c: asgn4_21CS30023.y
	yacc -Wnone -dtv asgn4_21CS30023.y

lex.yy.c: asgn4_21CS30023.l
	lex asgn4_21CS30023.l

clean:
	rm lex.yy.c a.out y.tab.c y.tab.h y.output
