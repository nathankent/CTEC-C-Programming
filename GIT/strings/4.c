#include <stdio.h>
#define MAX 80


int main() {
	
	char str1[MAX];
	int z;
	
	printf("Please input a string\n");
	scanf("%[^\n]", str1);
	        
	for (z=0; str1[z] != '\0'; z++)
		
		if (str1[z] != ' ')
		   str1[z] = ((str1[z] - 'a') + 5) % 26 + 'a';

		    
	

		
	printf("You entered: %s\n", str1);
	
	return 0;
	
	
}
