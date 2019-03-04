#include <stdio.h>
#include <string.h>

int stringStat(const char *string, size_t multiplier, int *count){
	
	int result;
	(*count)++;
	result = strlen(string) * multiplier;

	return result;
}

