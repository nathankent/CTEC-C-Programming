#include <stdio.h>

int main()
{
	int x, y, z = 1;
	
	printf("Please input the multiple of 1-10\n");
	scanf("%i", &y);
	
	while (x <= 12)
	{
		z = x * y;
		printf("%i x %i = %i\n", x,y,z);
		x++;

	}
	return 0;
}
