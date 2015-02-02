#include<stdio.h>
#define MAX 10


int main()
{
    struct paper{ char series;
                  int  size;
                 };
    
    struct paper a[MAX];
    struct paper b[MAX];
    struct paper c[MAX];
    int i;
    int x = 0;
    

    printf("Paper types (1 - Small, 2 - Medium, 3 - Large, 4 - X-Large \n");
    
    // a.size struct //
    
    for (i = 0; i < MAX; i++)
    {
          x++; 
    printf("Please input the paper sizes for a%i: \n", x);
    scanf("%i", &a[i].size);
    }
    
    x = 0; // Puts the x value back to zero to print a1,a2,a3 etc //
    
    for (i = 0; i < MAX; i++)
    {                                         
       x++;     
    printf("Paper sizes you entered for a%i: %i \n", x, a[i].size);
 
    }
    
    
    
    // b.size Struct //
    
    x = 0;
    
       for (i = 0; i < MAX; i++)
    {
          x++; 
    printf("Please input the paper sizes for b%i: \n", x);
    scanf("%i", &b[i].size);
    }
    
    x = 0; // Puts the x value back to zero to print b1,b2,b3 etc //
    
    for (i = 0; i < MAX; i++)
    {                                         
       x++;     
    printf("Paper sizes you entered for b%i: %i \n", x, b[i].size);
 
    }
    
    

    
    return 0;
}
