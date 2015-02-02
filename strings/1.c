#include <stdio.h>
#define MAX 80


int main() {
	
	char str1[MAX];
	int z;
	
	printf("Please input a string\n");
	scanf("%[^\n]", str1);
	        
	for (z=MAX; str1[z] != '\0'; z--)

		printf("You entered: %s\n", str1);
	
	
	return 0;
	
	
}
