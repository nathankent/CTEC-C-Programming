#include <stdio.h>

void incrBy(int x, int *y)
{
    *y = *y + x ; /* add x to the value of the thing at address y */
}

main()
{
    int t;
    int counter = 0;
    int i;
    
    printf("enter tick value "); scanf(" %i", &t);
    for  (i=0; i<10; i++)
    {
        incrBy(t,&counter);
        printf("The counter is now %d\n",counter);
    }
    return 0;
}
