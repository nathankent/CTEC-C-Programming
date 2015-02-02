#include <stdio.h>
#define SQR 10
#define TRI 10
#define SYM '*'

void printMenu(void)
{
    printf(" Enter your choice!\n");
    printf(" (s) print square\n");
    printf(" (t) print triangle\n");
    printf(" (q) quit\n");
    printf("? ");   
}

void printSquare()
{
    int i, j;
    for(i=0;i<SQR;i++) {
      for(j=0;j<SQR;j++)
        printf("%c",SYM);
      printf("\n");
    }
}

void printTriangle()
{
    int i, j;
    for(i=0;i<SQR;i++) {
      for(j=0;j<i;j++)
        printf("%c",SYM);
      printf("\n");
    }
}   

int main()
{
    char opt;
    int i,j;
    printMenu();
    scanf(" %c", &opt);
    while(opt != 'q') {
        switch (opt)
        {
        case 's' : printSquare();
                   break;
        case 't' : printTriangle();
                   break;
        default:   printf("Unknown option\n");
        }
        printMenu();
        scanf(" %c", &opt);
    }
    return 0;
}
