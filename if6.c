#include <stdio.h>

int main()

{
	int a,b,c;
	
	printf("Please input int one : \n");
	scanf("%i", &a);
	printf("Please input int two : \n");
	scanf("%i", &b);
	printf("Please input int three : \n");
	scanf("%i", &c);
	
	if (a > (b+c) || (b > (a+c)) || (c > (b+a))) {

		printf("Illegal\n");
	}
	
	if (a == b && b == c) {
		printf("Equilateral Triangle\n");
	}
	
	if ((a + b) > c){
		printf("Right Isocelese Triangle\n");
	}
	
	if (a==b || b == c || a == c)
		printf("Isosceles\n");
	
	if (a && c > b)
		printf("Right-Scalene");
	else
		printf("Scalene");
	return 0;
	
}
