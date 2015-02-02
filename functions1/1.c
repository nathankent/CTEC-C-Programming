#include <stdio.h>

int sqr (int x)
{
    return x*x;
}

int main()
{
    int k;
    for (k=0; k<100; k++)
        printf("sqr(%i) = %3i\n",k, sqr(k));
    return 0;
}
