#include <stdio.h>


void printSquare()
{
    int h, w, i, j;  // I = Height, J = Width
    char fill;
    
    printf("Please input the height you require\n");
    scanf(" %i", &h);
    
    printf("Please input the width you require\n");
    scanf(" %i", &w);
    
    printf("Please input the fill you require\n");
    scanf(" %c", &fill);
    
 
    for(i=0;i<h;i++) {
      for(j=0;j<w;j++)
        printf("%c",fill);
      printf("\n");
    }
}



int main()
{
	
    printSquare();
	
	
    return 0;
}
