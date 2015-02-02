#include <stdio.h>

int main()
{
	int x;
	int y;
	int multiply1;
	int multiply2;
	
	printf("Enter the x value: ");
	scanf("%i", &x);
	printf("Enter the y value: ");
	scanf("%i", &y);
	printf("You have entered %i and %i\n", x, y);
	printf("If we multiply both numbers by each other we get the value of %i\n", x*y);
	printf("Now we will do some simple division\n");
	printf("Please enter your first number: \n");
	scanf("%i", &multiply1);
	printf("Now enter your second number: \n");
	scanf("%i", &multiply2);
	printf("%i divided by %i equals %i \n", multiply1, multiply2, multiply1/multiply2);
	return 0;
}
