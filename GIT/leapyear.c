#include <stdio.h>


int main()

{
	int year;
	
	printf("Please input a year which is >=1582 : \n");
	scanf("%i", &year);
	
	if (year % 400 == 0)
	{
		printf("Year is a leap year\n");
	}
	else if (year % 100 == 0)
	{
		printf("Year is not a leap year\n");
	}
	else if (year % 4 == 0)
	{
		printf("Year is a leap year\n");
	}
	else
		printf("Year is not a leap year\n");
	
	return 0;
	
}
