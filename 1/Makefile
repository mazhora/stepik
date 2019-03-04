
makeall: make lib 

make: hello.h main.c lib
	gcc main.c -o ./binary/hello -fPIC -L./binary/ -lHello 

lib: hello.h hello.c
	gcc -shared -fPIC -o ./binary/libHello.so hello.c
	
clean:
	-rm ./binary/*
