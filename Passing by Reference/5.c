#include <stdio.h>

int add(int howMany, int *array)
/* note we need to specify how may elements we intend to use
   because array is just a memory address */
{
    int total = 0;
    int i;
    
    for (i = 0; i < howMany; i++)
    {
        total = total + array[i];
    }
    return total;
}

main()
{
    int block[10];
    int amount;
    int i;
    
    for  (i = 0; i < 10; i++)
    {
        printf("enter next number ");
        scanf(" %i", &block[i]);
    }
    amount = add(3, block);
    printf("The total amount is %d\n", amount);
}
