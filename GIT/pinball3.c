#include <stdio.h>

int main()
{
    int v1, v2, v3;
    scanf("%i %i %i",&v1,&v2,&v3);
    
    
    if (v1==1)
    {
        if (v2==1)
        	if (v3==1)
        	
        		printf("A ");
        	else
        		printf("B ");
        else 
        	if (v3==1)
        		printf("C ");
        	else
        		printf("D ");
    }

    else
    	    
    {
         if (v2==1)
        	if (v3==1)
        	
        		printf("E ");
        	else
        		printf("F ");
        else 
        	if (v3==1)
        		printf("G ");
        	else
        		printf("H ");
    }
    printf("\n");
    
    
    
   
    
    return 0;
}
