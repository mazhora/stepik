#include <stdbool.h>
#include <stdio.h>
#include <stddef.h>
#include <dlfcn.h>

void (*hello_message)(const char *);

bool init_lib(){
	void *handle = dlopen("./libDynamic.so", RTLD_LAZY);
	if (NULL == handle){
		printf("1\n");
		return false;
	}
	hello_message = (void(*)(const char*))dlsym(handle, "hello_message");
	
	if (NULL == hello_message){
		printf("2\n");
		return false;
	}
	printf("OK\n");
	return true;
}

int main(){

	if (init_lib())
		hello_message("Vasya");
	else
		printf("Lib was not loaded");
	return 0;
}

