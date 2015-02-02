#include <stdio.h>

void click(int limit, int *dial)
{
    if (*dial < limit)
    *dial = *dial + 1 ; /* add x to the value of the thing at address y */
}

main()
{

    int max;
    int i;
    int counter = 0;

    
    printf("enter counter value "); scanf(" %i", &counter);
    printf("Please enter a value for max : \n"); scanf(" %i", &max);
           
            for  (i=0; i<max; i++)
            {
            click(max,&counter);
            printf("The counter is now %d\n",counter);

            }
        
    
    return 0;
}
