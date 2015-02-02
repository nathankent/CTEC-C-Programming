#include <stdio.h>

int sqr (long int x)
{
    return x*x;
}

int cube (long int x)
{
	return x * sqr(x);
}

int fourths (long int x)
{
	return sqr(x) * sqr(x);
	
}

long int main()
{
    long int k;
    printf("%16s%16s%12s\n","squares","cubes","fourths");
    
    for (k=00; k<256; k++)

    printf("%16ld%16ld%12ld\n", sqr(k), cube(k), fourths(k));
  


    return 0;
}

// Without long int you can use 215 (k<216) 0-215
// With a long int you can use 255 (k<256) 0-255
