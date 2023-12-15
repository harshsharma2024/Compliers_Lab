test: tinyC libass2_21CS30003_21CS30023.a
	
	@echo "TEST 1"
	./tinyC _test_1 < testcases/input/ass6_21CS30003_21CS30023_test_1.c > testcases/output/ass6_21CS30003_21CS30023_quads1.out
	@echo "\nTest 1 Successfully Translated !\n"

	@echo "TEST 2"
	./tinyC _test_2 < testcases/input/ass6_21CS30003_21CS30023_test_2.c > testcases/output/ass6_21CS30003_21CS30023_quads2.out
	@echo "\nTest 2 Successfully Translated !\n"
	
	@echo "TEST 3"
	./tinyC _test_3 < testcases/input/ass6_21CS30003_21CS30023_test_3.c > testcases/output/ass6_21CS30003_21CS30023_quads3.out
	@echo "\nTest 3 Successfully Translated !\n"
	
	@echo "TEST 4"
	./tinyC _test_4 < testcases/input/ass6_21CS30003_21CS30023_test_4.c > testcases/output/ass6_21CS30003_21CS30023_quads4.out
	@echo "\nTest 4 Successfully Translated !\n"
	
	@echo "TEST 5"
	./tinyC _test_5 < testcases/input/ass6_21CS30003_21CS30023_test_5.c > testcases/output/ass6_21CS30003_21CS30023_quads5.out
	@echo "\nTest 5 Successfully Translated !\n"
	
	@echo "TEST 6"
	./tinyC _test_6 < testcases/input/ass6_21CS30003_21CS30023_test_6.c > testcases/output/ass6_21CS30003_21CS30023_quads6.out
	@echo "\nTest 6 Successfully Translated !\n"
	
	@echo "TEST 7"
	./tinyC _test_7 < testcases/input/ass6_21CS30003_21CS30023_test_7.c > testcases/output/ass6_21CS30003_21CS30023_quads7.out
	@echo "\nTest 7 Successfully Translated !\n"

	@echo "TEST 8"
	./tinyC _test_8 < testcases/input/ass6_21CS30003_21CS30023_test_8.c > testcases/output/ass6_21CS30003_21CS30023_quads8.out
	@echo "\nTest 8 Successfully Translated !\n"

	@echo "Generating .o from .s !\n"
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_1.s -o testcases/output/ass6_21CS30003_21CS30023_test_1.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_2.s -o testcases/output/ass6_21CS30003_21CS30023_test_2.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_3.s -o testcases/output/ass6_21CS30003_21CS30023_test_3.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_4.s -o testcases/output/ass6_21CS30003_21CS30023_test_4.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_5.s -o testcases/output/ass6_21CS30003_21CS30023_test_5.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_6.s -o testcases/output/ass6_21CS30003_21CS30023_test_6.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_7.s -o testcases/output/ass6_21CS30003_21CS30023_test_7.o
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_8.s -o testcases/output/ass6_21CS30003_21CS30023_test_8.o
	@echo "Successfully Generated .o files !\n\n"

	@echo "Compiling the test files !\n"
	gcc testcases/output/ass6_21CS30003_21CS30023_test_1.o -o testcases/output/test1 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_2.o -o testcases/output/test2 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_3.o -o testcases/output/test3 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_4.o -o testcases/output/test4 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_5.o -o testcases/output/test5 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_6.o -o testcases/output/test6 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_7.o -o testcases/output/test7 -L. -lass2_21CS30003_21CS30023 -no-pie
	gcc testcases/output/ass6_21CS30003_21CS30023_test_8.o -o testcases/output/test8 -L. -lass2_21CS30003_21CS30023 -no-pie
	@echo "Successfully Compiled All test files !\n\n"

	@echo "Executing all the files !\n"

	@echo "Testing file 1\n"
	./testcases/output/test1
	@echo "Done!!\n"

	@echo "Testing file 2\n"
	./testcases/output/test2
	@echo "Done!!\n"

	@echo "Testing file 3\n"
	./testcases/output/test3
	@echo "Done!!\n"

	@echo "Testing file 4\n"
	./testcases/output/test4
	@echo "Done!!\n"

	@echo "Testing file 5\n"
	./testcases/output/test5
	@echo "Done!!\n"

	@echo "Testing file 6\n"
	./testcases/output/test6
	@echo "Done!!\n"

	@echo "Testing file 7\n"
	./testcases/output/test7
	@echo "Done!!\n"

	@echo "Testing file 8\n"
	./testcases/output/test8
	@echo "Done!!\n"

testmini: tinyC libass2_21CS30003_21CS30023.a
	@echo "TEST 3"
	./tinyC _test_3 < testcases/input/ass6_21CS30003_21CS30023_test_3.c > testcases/output/ass6_21CS30003_21CS30023_quads3.out
	@echo "\nTest 3 Successfully Translated !\n"
	gcc -c testcases/output/ass6_21CS30003_21CS30023_test_3.s -o testcases/output/ass6_21CS30003_21CS30023_test_3.o
	gcc testcases/output/ass6_21CS30003_21CS30023_test_3.o -o testcases/output/test3 -L. -lass2_21CS30003_21CS30023 -no-pie

tinyC: lex.yy.o ass6_21CS30003_21CS30023.tab.o ass6_21CS30003_21CS30023_translator.o ass6_21CS30003_21CS30023_target_translator.o
	g++ lex.yy.o ass6_21CS30003_21CS30023.tab.o ass6_21CS30003_21CS30023_translator.o ass6_21CS30003_21CS30023_target_translator.o -lfl -o tinyC

ass6_21CS30003_21CS30023_target_translator.o: ass6_21CS30003_21CS30023_target_translator.cxx ass6_21CS30003_21CS30023_translator.h
	g++ -c ass6_21CS30003_21CS30023_target_translator.cxx

ass6_21CS30003_21CS30023_translator.o: ass6_21CS30003_21CS30023_translator.cxx ass6_21CS30003_21CS30023_translator.h
	g++ -c ass6_21CS30003_21CS30023_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass6_21CS30003_21CS30023.tab.o: ass6_21CS30003_21CS30023.tab.c
	g++ -c ass6_21CS30003_21CS30023.tab.c

lex.yy.c: ass6_21CS30003_21CS30023.l ass6_21CS30003_21CS30023.tab.h ass6_21CS30003_21CS30023_translator.h
	flex ass6_21CS30003_21CS30023.l

ass6_21CS30003_21CS30023.tab.c: ass6_21CS30003_21CS30023.y
	bison -dv ass6_21CS30003_21CS30023.y -W

ass6_21CS30003_21CS30023.tab.h: ass6_21CS30003_21CS30023.y
	bison -dv ass6_21CS30003_21CS30023.y -W

libass2_21CS30003_21CS30023.a:
	gcc -W -c ass2_21CS30003_21CS30023.c
	ar -rcs libass2_21CS30003_21CS30023.a ass2_21CS30003_21CS30023.o

tarify:
	tar -cvf ass6_21CS30003_21CS30023.tar ./testcases/ myl.h ass6_21CS30003_21CS30023_translator.h ass6_21CS30003_21CS30023_translator.cxx ass6_21CS30003_21CS30023_target_translator.cxx ass6_21CS30003_21CS30023.l ass6_21CS30003_21CS30023.y Makefile ass2_21CS30003_21CS30023.c README.md
cleanTarify:
	rm ass6_21CS30003_21CS30023.tar
clean:
	rm lex.yy.c *.o	tinyC\
	   ass6_21CS30003_21CS30023.tab.c\
	   ass6_21CS30003_21CS30023.tab.h\
	   ass6_21CS30003_21CS30023.output\
	   testcases/output/*\
	   libass2_21CS30003_21CS30023.a\