#include <stdio.h>
#define MAX 80


int main() {
	
	char str1[MAX];
	int z;
	
	printf("Please input a string\n");
	scanf("%[^\n]", str1);
	        
	for (z=0; str1[z] != '\0'; z++)
	
		str1[z] = toupper(str1[z]);
		    
	

		
	printf("You entered: %s\n", str1);
	
	return 0;
	
	
}
