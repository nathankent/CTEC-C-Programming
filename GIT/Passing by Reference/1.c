#include <stdio.h>

void swapChar(char *x, char *y)
{
    char tmp;
    
    tmp = *x;
    *x = *y; 
    *y = tmp;
}

main()
{
    char a, b;
    
    printf("enter a "); scanf(" %c", &a);
    printf("enter b "); scanf(" %c", &b);
    printf("Before: a = %c and b = %c\n", a, b);
    swapChar(&a,&b);
    printf("After:  a = %c and b = %c\n", a, b);
    return 0;
}
