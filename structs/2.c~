#include <stdio.h>

struct three { int first;
                   int second;
                   int third;
                 };

void rotate (struct three * s)
{
    int temp;
    temp      = s->first;
    s->first  = s->second;
    s->second = s->third;
    s->third  = temp;
}

main()
{
      
    struct three t, r;
   
    
    printf("Please input 3 values: \n");
    scanf(" %i", &t.first);
    scanf(" %i", &t.second);
    scanf(" %i", &t.third);
    rotate(&t);
    printf("\n");
    printf( "(%i,%i,%i) \n", t.first, t.second, t.third);
    
    
    /*  (a) Input three values from the keyboard
            into the three fields of t.

        (b) Assign the fields of t to r such that the first value in t
            becomes the second value in r, the second value in t becomes
            the third value in r, and the third value in t becomes the
            first value in r.
            
        (c) Print out the final value of r

    */
}
