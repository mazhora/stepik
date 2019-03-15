all: lib
	gcc main.c -o binary/solution -fPIC -ldl  

lib: 
	gcc -shared libShared.c -o binary/libShared.so -fPIC

clear:
	rm -rf binary/*
