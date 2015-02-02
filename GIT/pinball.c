#include <stdio.h>

int main()
{
    int v1, v2;
    scanf("%i %i",&v1,&v2);
    if (v1==1)
    {
        if (v2==1)
           printf("A ");
        else
           printf("B ");
    }

    else
    {
        if (v2==1)
           printf("C ");
        else
           printf("D ");
    }
    printf("\n");
    return 0;
}
