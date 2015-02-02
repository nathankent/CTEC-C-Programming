#include <stdio.h>
#define MAX 80


int main() {
	
	char str1[MAX];
	int z;
	int length;
	
	printf("Please input a string\n");
	scanf("%[^\n]", str1);
	
	length = 0;
	for (z=0; str1[z] != '\0'  ; z++)
		length++;
	
	for (z = length-1; z>=0; z--)

		printf("%c", str1[z]);
	
	printf("\n");
		
	
	return 0;
	
	
}
