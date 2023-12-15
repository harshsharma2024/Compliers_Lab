final: a.out ass3_21CS30023_test.c
	./a.out < ass3_21CS30023_test.c

a.out: lex.yy.c ass3_21CS30023.c
	gcc lex.yy.c ass3_21CS30023.c -lfl

lex.yy.c: ass3_21CS30023.l
	lex ass3_21CS30023.l

clean:
	rm lex.yy.c a.out
