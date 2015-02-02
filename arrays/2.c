#include <stdio.h>
#define MAX 10

int main()


{
	float a[MAX];
	int i;
	float average;
	
	for (i = 0; i < MAX; i++)
	{
		printf("Please input a number: ");
		scanf(" %f", &a[i]);
	}
	
	average = 0;
	for (i = 0; i < MAX; i++)
	{
		average += a[i];
	}
	
	average = average / MAX;
	
	printf("\n");
	printf("The average of all the numbers entered is %f\n", average);

	return 0;
	
}
