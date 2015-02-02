#include <stdio.h>

void increment(int * x)
{	
	*x = *x + 1;
	
}

void plusTwo(int * x)
{	
	increment(x);
	increment(x);
	
}


int main()
{

        int a;
        a = 7;
        plusTwo(&a);
        printf("%i\n",a);

}
