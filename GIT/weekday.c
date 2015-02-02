#include <stdio.h>


int main()
{
	int day,month,year,wd;
	
	
	printf("Please input the day : \n");
	scanf("%i", &day);
	printf("Please input the month : \n");
	scanf("%i", &month);
	printf("Please input the year : \n");
	scanf("%i", &year);
	
	wd = day
	
	if (month < 3)
	{
		month + 10;
		year - 1;
	}
	else 
	{
		month - 2;
	}
		
	wd = (month * 26 - 1) / 10;
	



	
	
	
	return 0;

}

