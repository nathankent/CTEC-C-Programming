#include <stdio.h>

int main()
{

	int a,b;

	printf("Please input your first char: \n");
	scanf(" %c", &a);
	printf("Please input your second char: \n");
	scanf(" %c", &b);
	printf("0 is false, 1 is true\n");
	
	printf("%i < %i is %i\n", a,b, a < b);
	printf("%i > %i is %i\n", a,b, a > b);
	printf("%i <= %i is %i\n", a,b, a <= b);
	printf("%i >= %i is %i\n", a,b, a >= b);
	printf("%i == %i is %i\n", a,b, a == b);
	printf("%i != %i is %i\n", a,b, a != b);


    return 0;
}
