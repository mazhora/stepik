
makeall: make lib 

make: hello.h main.c lib
	gcc main.c -o hello -fPIC -L. -lHello 

lib: hello.h hello.c
	gcc -shared -fPIC -o libHello.so hello.c

clean:
	-rm hello libHello.so *.o
