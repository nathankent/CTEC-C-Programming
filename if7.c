#include <stdio.h>

int main()
{
    int a,b,calc;
    
    printf("Please input the your courework mark as a percentage : \n");
    scanf("%i", &a);
    printf("Please input your examination mark as a percentage : \n");
    scanf("%i", &b);
    
    calc = (a + b) / 2;
	
	printf("Your overall percentage of the coursework and exam marks as a percentage is : %i\n", calc);

	if ((calc >= 40) || (calc < 40))
	{
		if (calc >= 40)
		{
			printf("You have passed the module!\n");
		}
		else 
		{
			printf("You have failed the module :(\n");
		}
		
		
	}
			
		
	
	if (calc < 40)
	{
		
		if (a < 40)
		{
			printf("You have failed your coursework, please resit.\n");
		}
		else if (b < 40)
		{
			printf("You have failed your exam, please resit.\n");
		}
		
	}
		
         
		 
}
	