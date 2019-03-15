all: lib 
	gcc -o binary/lalala main.c -fPIC -ldl 

lib:
	gcc -o binary/libDynamic.so -shared libDynamic.c -fPIC

clear:
	rm -rf binary/*
