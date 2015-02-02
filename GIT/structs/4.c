#include <stdio.h>
#define MAX 5


main()
{
        
struct date   
    { int day;      
      int month;    
      int year;     
    };         
                    
struct person     
    { char name[80];
      struct date birth;
    };       
        
struct person people[MAX];

int i;
int x;


     // Name inputting loop //
     x = 0;
    
     for (i = 0; i < MAX; i++)
     {
             x++;
     printf("Please input the name of person %i : \n", x);
     scanf("%s", &people[i].name);
     }
     
     x = 0;
     
     for (i = 0; i < MAX; i++)
     {
             x++;
     printf("Person #%i name : %s\n", x, people[i].name);
     
     }
        printf("\n");     
     // DOB inputting loop //
     
          x = 0;
    
     for (i = 0; i < MAX; i++)
     {
             x++;
     printf("Please input DOB for %s : \n", people[i].name, x);
     scanf(" %i%i%i", &people[i].birth.day, &people[i].birth.month, &people[i].birth.year);
     }
     
     printf("\n");
     
     for (i = 0; i < MAX; i++)
     {

             printf("%s's DOB is : %i/%i/%i \n", people[i].name, people[i].birth.day, people[i].birth.month, people[i].birth.year);
     
     }
     
    

}
