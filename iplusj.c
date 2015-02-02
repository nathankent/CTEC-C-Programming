#include <stdio.h>

int main()
{
	float area, pi, radius, circumference;
	pi = 3.141;
	printf("Please enter the area: \n");
	scanf("%f", &area);
	printf("Please enter the radius: \n");
	scanf("%f", &radius);
	area = pi * radius * radius;
	printf("Here is the area calculation: %f", area);
	
	return 0;
}
