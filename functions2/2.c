#include <stdio.h>

void drawLine(int spaces, int stars, char fill)
{
	int i;
	for (i=0; i<spaces; i++)
		printf(" ");
	for (i=0; i<stars; i++)
		printf("%c", fill);
	printf("\n");
}

void printDiamond()
{
	int spaces, stars, i, j;
	char fill;
	
	printf("Please input the number of spaces: \n");
	scanf(" %i", &spaces);
	printf("Please input the number of stars: \n");
	scanf(" %i", &stars);
	printf("Please input the character: \n");
	scanf(" %c", &fill);
	
	drawLine(10, 0, fill);
	drawLine(9, 2, fill);
	drawLine(8, 4, fill);
	drawLine(7, 6, fill);
	drawLine(6, 8, fill);
	
 
}

int main()
{
	
printDiamond();

return 0;

}
