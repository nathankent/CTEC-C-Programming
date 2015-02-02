#include <stdio.h>

int main()
{
	int adult,children,adtotal,childtotal;
	adult = 20;
	children = 10;
	adtotal = 0;
	childtotal = 0;
	
	printf("Please enter how many adult tickets you require: \n");
	scanf("%i", &adtotal);
	printf("Please enter how many children tickets you require: \n");
	scanf("%i", &childtotal);
	printf("You have purchased %i Adult tickets and %i Children tickets \n", adtotal, childtotal);
	printf("The total cost of the tickets is: $%i \n", (adult * adtotal) + (children * childtotal));
	return 0;
}