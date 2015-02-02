#include <stdio.h>
#define MAX 20

int main()


{
	int a[MAX];
	int i;

	
	for (i = 0; i < MAX; i++)
	{
		printf("Please enter a value\n");
		scanf(" %i", &a[i]);
			
		
		
		
	}
	
	for (i = 18; i >= 2; i--)
	{
		
		if (a[i] % 2 == 0)
		{
		printf("Reversed order of even : %i\n", a[i]);
		}
		
	}
	

	return 0;
	
}
