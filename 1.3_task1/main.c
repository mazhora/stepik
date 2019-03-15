#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>


int (*func)(int a);

int main(int argc, char * argv[]){

	char dll[256] = {'.','/'};
	strcat(dll,argv[1]);

	void * loadlib = dlopen(dll, RTLD_LAZY);


	func = (int (*)(int))dlsym(loadlib, argv[2]);

	int a = atoi(argv[3]);
	int result = func(a);

	printf("%d\n", result);
	return 0;
}


