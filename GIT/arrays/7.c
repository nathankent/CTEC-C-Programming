#include <stdio.h>
#define MAX 10

int main()


{
	int a[MAX] , b[MAX];
	int i;

	
	for (i = 0; i < MAX; i++)
	{
		printf("Please enter a value\n");
		scanf(" %i", &a[i]);
		
		
		
	}
	
	for (i = 10; i > 0; i--)
	{
		printf("Reversed order : %i\n", a[i]);
	}
	

	return 0;
	
}
