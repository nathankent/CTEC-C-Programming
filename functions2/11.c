#include <stdio.h>              
 
int B(int b);                         
int A(int a) {                        
    if (a)                            
       return 1 + B(a-1);             
    else                              
       return 0;                      
}                                     
int B(int b) {                        
    if (b)                            
       return 2 + A(b/2);             
    else                              
       return 0;                      
}                                     
int main()                            
{                                     
    printf("1st answer = %i\n", A(5));
    printf("2nd answer = %i\n", A(9));
}     
