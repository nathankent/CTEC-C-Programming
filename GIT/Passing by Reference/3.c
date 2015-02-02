#include <stdio.h>

void incrBy(int limit, int *dial)
{
    if (*dial < limit)
    *dial = *dial + 1 ; /* add x to the value of the thing at address y */
}

main()
{
    int t;
    int counter = 0;
    int i;
    int loop = 0;
    
    printf("enter click value "); scanf(" %i", &t);
           
            for  (i=0; i<t; i++)
            {
                    if (t != counter){
            incrBy(t,&counter);
            printf("The counter is now %d\n",counter);      
                    }
            }
        
    
    return 0;
}
