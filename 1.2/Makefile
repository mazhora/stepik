all: lib
	gcc -o ./binary/app main.c -L./binary/ -lSolution

lib:
	gcc -shared solution.c -o ./binary/libSolution.so

clear:
	rm ./binary/*
