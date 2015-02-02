#include <stdio.h>

void recprintasc(int k, int max)
{
    if (k <= max)
    {
    	recprintasc( k+1, max );
        printf("%i\n", k);
    }
}

void recprintdesc(int k, int max)
{
    if (k <= max)
    {
        printf("%i\n", k);
        recprintdesc( k+1, max );
    }
}

int main()
{
    int input;
    
    printf("Please input 1 for yes for ascending order, or 0 no for descending : \n");
    scanf("%i",&input);
    
    if (input == 1){

        recprintasc( 1, 10 );
    }
    else {
        recprintdesc( 1, 10 );

    }
    return 0;
}
