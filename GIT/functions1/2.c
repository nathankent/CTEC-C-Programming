#include <stdio.h>

int sqr (int x)
{
    return x*x;
}

int cube (int x)
{
	return x * sqr(x);
}

int fourths (int x)
{
	return sqr(x) * sqr(x);
	
}

int main()
{
    int k;
    printf("%16s%16s%12s\n","squares","cubes","fourths");
    
    for (k=0; k<32; k++)

    printf("%16i%16i%12i\n", sqr(k), cube(k), fourths(k));
  


    return 0;
}
