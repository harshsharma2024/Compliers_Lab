a.out: main.o libass2_21CS30023.a
	cc main.o -L. -lass2_21CS30023

main.o: main.c myl.h
	cc -c main.c

libass2_21CS30023.a: ass2_21CS30023.o
	ar -rcs libass2_21CS30023.a ass2_21CS30023.o

ass2_21CS30023.o: ass2_21CS30023.c myl.h
	cc -c ass2_21CS30023.c

clean:
	rm a.out main.o libass2_21CS30023.a ass2_21CS30023.o
