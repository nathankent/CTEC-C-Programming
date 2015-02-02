#include <stdio.h>
#define MAX 10

int main()


{
	int a[MAX], b[MAX];
	int i;

	
	for (i = 0; i < MAX; i++)
	{
		printf("Please enter a value\n");
		scanf(" %i", &a[i]);
		
		if (a[i] % 2 != 0)
		{
			b[i] = 1;
		}
		if (a[i] % 2 == 0)
		{
			b[i] = 0;
		}
		
	}
	
	for (i = 0; i < MAX; i++)
	{
	printf("You entered %i (1 is odd, 0 is even) : %i \n", a[i], b[i]);
	}
	

	return 0;
	
}
