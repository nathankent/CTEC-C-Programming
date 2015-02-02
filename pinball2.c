#include <stdio.h>

int main()
{
    int v1, v1a ,v1b , v2 ,v2a ,v2b;
    scanf("%i",&v1);
    
    //Part 1//
    
    if (v1==1)
    {
    	    
    	printf("Please enter another value\n");
    	scanf("%i",&v1a);
    	
    	if (v1a == 1)
    	{
    	printf("Please enter another value\n");
    	scanf("%i",&v1b);		
    	}
    	
    	if ((v1b == 1) && (v1a == 1))
    	{
    		printf("A");
    	}
    	else {
    		printf("B");
    	}

    	
    }

    
    


    printf("\n");
    return 0;
}
