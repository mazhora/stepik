
#include <stdio.h>
#include "binary/solution.h"

int main(){
	
	char string[256] = "lalala";
	int multi, count;
	printf("Input string is %s\n", string);
	printf("Input multi:\n");
	scanf("%d", &multi);
	printf("Input count:\n");
	scanf("%d", &count);

	printf("\n%d\n", stringStat(string, multi, &count));
	printf("Count:%d\n", count);



	return 0;
}
