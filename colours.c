#include <stdio.h>

int main() 
{
	int number;
	
	printf("Please input a number 1 - 7 : \n");
	scanf("%i", &number);
	
	
	switch (number)
	{
	case  1 : printf("Red\n");
	break;
	case  2 : printf("Orange\n");
	break;
	case  3 : printf("Yellow\n");
	break;
	case  4 : printf("Green\n");
	break;
	case  5 : printf("Blue\n");
	break;
	case  6 : printf("Indigo\n");
	break;
	case  7 : printf("Violet\n");
	break;
	default : printf("Sorry that value was not recognised : %i\n", number);
	}
	
	return 0;
}
	
