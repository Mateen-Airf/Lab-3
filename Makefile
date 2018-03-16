myexe : myMathFunc.o myStrfunc.o myMain.o
	gcc myMathFunc.o myStrfunc.o myMain.o -o myexe
myMain.o : myMain.c
	gcc -c myMain.c
myMatchFunc.o : myMathFunc.c myMath.h
	gcc -c myMathFunc.c
myStrfunc.o : myStrfunc.c myFunc.h
	gcc -c myStrfunc.c
