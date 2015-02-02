#include <stdio.h>

void increment(int * x)
{	
	*x = *x + 1;
	
}


int main()
{

        int a;
        a = 7;
        increment(&a);
        printf("%i\n",a);

}
