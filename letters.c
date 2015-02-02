#include <stdio.h>

char main() 
{
	char input;
	
	printf("Please input a character to check : \n");
	scanf("%c", &input);
	
	if (isupper(input))
	{
		input = tolower(input);
		
		
	}
		
	if (isalpha(input))
	{
	
	switch (input)
	 {
	case 'a' :
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' : printf("Vowel\n");
	break;
	default : printf("Constanant\n");
	 }
	}
	
	else 
	{
		printf("Not Valid\n");
	}
	return 0;
	
}
