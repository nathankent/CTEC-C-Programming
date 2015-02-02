#include<stdio.h>

int main()
{
    struct paper{ char series;
                  int  size;
                  int  myPaper;
                 };
    
    struct paper a0, a1, a2, a3, a4, a5, a6, a7, a8;
    struct paper b0, b1, b2, b3, b4, b5, b6, b7, b8;
    struct paper c0, c1, c3, c4;
    
    a0.series = 'A';
    a0.size =  0;
    b0.series = 'B';
    b0.size =  0;
    a1.series = 'A';
    a1.size =  1;
    b1.series = 'B';
    b1.size =  1;
    a2.series = 'A';
    a2.size =  2;
    b2.series = 'B';
    b2.size =  2; 
    a3.series = 'A';
    a3.size =  3;
    b3.series = 'B';
    b3.size =  3; 
    a4.series = 'A';
    a4.size =  4;
    b4.series = 'B';
    b4.size =  4;     
    a5.series = 'A';
    a5.size = 5;
    b5.series = 'B';
    b5.size = 5;
    a6.series = 'A';
    a6.size = 6;
    b6.series = 'B';
    b6.size = 6;
    a7.series = 'A';
    a7.size = 7;
    b7.series = 'B';
    b7.size = 7;
    a8.series = 'A';
    a8.size = 8;
    b8.series = 'B';
    b8.size = 8;

    printf("Paper types (1 - Small, 2 - Medium, 3 - Large, 4 - X-Large \n");

    scanf("%i", &c0.myPaper);
    scanf("%i", &c1.myPaper);        
    
    
    printf("a0 represents paper %c%i - Paper type : %i \n", a0.series, a0.size, c0.myPaper);
    printf("a1 represents paper %c%i - Paper type : %i \n", a1.series, a1.size, c1.myPaper);
    printf("a2 represents paper %c%i\n", a2.series, a2.size);
    printf("a3 represents paper %c%i\n", a3.series, a3.size);
    printf("a4 represents paper %c%i\n", a4.series, a4.size);
    printf("a5 represents paper %c%i\n", a5.series, a5.size);
    printf("a6 represents paper %c%i\n", a6.series, a6.size);
    printf("a7 represents paper %c%i\n", a7.series, a7.size);
    printf("a8 represents paper %c%i\n", a8.series, a8.size);

    
    return 0;
}
