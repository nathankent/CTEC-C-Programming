#include <stdio.h>
#define MAX 10

int main()


{
	int a[MAX];
	int i;

	
	for (i = 0; i < MAX; i++)
	{
		a[i] = i;
	}
	
	for (i = 0; i < MAX; i++)
	{
	printf("The array value : %i \n", a[i]);
	}
	

	return 0;
	
}
