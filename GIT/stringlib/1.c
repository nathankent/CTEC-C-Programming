#include <stdio.h>

/*----------------------------------------------------------------------------------*/

    int  strlength(char * string)
    {
        /* returns the length of a string */
        
      
        int i=0;
        while (string[i]) i++;
        return i;
        
       
       
    }

/*----------------------------------------------------------------------------------*/

    int strisalpha(char * string)
    {
        /* returns 1 if string contains only alphabetic characters else returns 0 */
        
        int i=0;
        while (string[i])
        {
          if (!isalpha(string[i]))
             return 0;             
          i++;
        }
        return 1;
        
    }

/*----------------------------------------------------------------------------------*/

    int  strfirst(char * string, char letter)
    {
        /* returns the index of the first occurrence of letter in string
           or -1 if it does not occur */
           
           int i = 0;
           
           while (string[i])
           {
             if (string[i] == letter)
                     return i;
             
             i++;

           }
           return -1;
           
                    
           
           
    }

/*----------------------------------------------------------------------------------*/

    int  strlast(char * string, char letter)
    {
        /* returns the index of the last occurence of letter in string                                                                   
           or -1 if it does not occur */
           
           int i = 0;
           int k = -1;
           
           while (string[i] != '\0')
           {
                   if (string[i] == letter)
                           k = i;
                   
                   i++;
           }
           
           return k;

           
           
           
    }

/*----------------------------------------------------------------------------------*/

    void strcopy(char * string1, char * string2)
    {
       /* copies string1 to string 2 */
    
    }

/*----------------------------------------------------------------------------------*/

    void strhead(char * string1, char * string2, int n)
    {
       /* copies the first n characters of string1 to string2 */
    }

/*----------------------------------------------------------------------------------*/

    void strtail(char * string1, char * string2, int n)
    {
       /* copies the last n characters of string1 to string2 */
    }

/*----------------------------------------------------------------------------------*/

    void strmid(char * string1, int start, int end, char * string2)
    {
       /* copies the characters of string1 from start to end (inclusive) to string2 */
    }

/*----------------------------------------------------------------------------------*/

    void strnodup(char *string)
    {  /* removes any duplicate characters from string1
          e.g. "abcdabcaba" would become "abcd"
       */
    }

/*----------------------------------------------------------------------------------*/

    int isprefix(char * string1, char * string2)
    {
       /* if string1 is a prefix of string2 returns 1 else returns 0
          e.g.  isprefix("hello","hello world") returns 1
                isprefix("world","hello world") returns 0

          Note that we define an empty string to be a valid prefix of any string.
          Thus  isprefix("", "hello world")     returns 1
           and  isprefix("", "")                returns 1
       */
    }

/*----------------------------------------------------------------------------------*/

    /* If you choose to answer coursework option A then
       You will need to put the function that answers courswork Option A here */ 

/*----------------------------------------------------------------------------------*/

    /* If you choose to answer coursework option B then
       You will need to put the function that answers courswork Option B here */ 


/*----------------------------------------------------------------------------------*/
/*                                Utility functions                                 */
/*----------------------------------------------------------------------------------*/

    int promptUserForChoice()
    {
      int choice = -1;
      char input[256];
   
      while (choice < 0 || choice > 13)
      {
        printf("\n");
        printf("--------------------------------------------------------\n");
        printf("Options:\n");
        printf("        QUIT TESTING       (0)    TEST strhead       (7)  \n");
        printf("        TEST EVERYTHING    (1)    TEST strtail       (8)  \n");
        printf("        TEST strlength     (2)    TEST strmid        (9)  \n");
        printf("        TEST strisalpha    (3)    TEST strnodup     (10)  \n");
        printf("        TEST strfirst      (4)    TEST isprefix     (11)  \n");
        printf("        TEST strlast       (5)    CWK question A    (12)  \n");
        printf("        TEST strcopy       (6)    CWK question B    (13)  \n");
        printf("Choice ? ");
        scanf(" %s", input);
        choice = atoi(input);
        printf("Selected %i\n\n", choice);
      }
      return choice;
    }

    void testing(char * name)
    {
        printf("\n");
        printf("--------------------------------------------------------\n");
        printf("                Testing:\t%s\n",name);
        printf("\n");
    }

    void promptAndGetString(char * str)
    {
        char junk;
        str[0] = '\0';
        printf("Enter a string : ");
        scanf("%c%[^\n]", &junk, str);
        printf("You entered \"%s\"\n",str);
    }
 

/*----------------------------------------------------------------------------------*/
/*                                  Main Program                                    */
/*----------------------------------------------------------------------------------*/

main()
{
  char stringA[1024],
       stringB[1024];
  int start,
      end,
      n,
      i,
      testno;
  char letter;
  
  testno = promptUserForChoice();
  while (testno != 0)
  {
    switch (testno)
    {
    case  1 : printf(">> \tSelected everything\n"); 
              printf(">> \tEach test will be run once\n");
 
    case  2 : testing("strlength");
              promptAndGetString(stringA);                                  
              n=strlength(stringA);                                
              printf("\"%s\" has length %d\n",stringA,n);                    
 
              if (testno != 1) break;
 
    case  3 : testing("strisalpha");
              promptAndGetString(stringA);    
              if (strisalpha(stringA))                           
                   printf(" \"%s\" contains only alphabetic chars\n",stringA) ;    
              else                                               
                   printf(" \"%s\" contains non-alphabetic chars\n",stringA) ;
 
              if (testno != 1) break;
 
    case  4 : testing("strfirst");
              promptAndGetString(stringA);                  
              printf("Input a letter (char)? ");
              scanf(" %c", &letter);                    
              n=strfirst(stringA,letter);                                      
              if (n<0)                                                         
                   printf(" \"%s\" does not contain %c\n",stringA, letter) ;     
              else                                                             
                   printf(" %c first occurs as \"%s\"[%d] \n",letter, stringA, n) ; 
 
              if (testno != 1) break;
 
    case  5 : testing("strlast");
              promptAndGetString(stringA);                  
              printf("Input a letter (char)? ");
              scanf(" %c", &letter);                    
              n=strlast(stringA,letter);                                      
              if (n<0)                                                         
                   printf(" \"%s\" does not contain %c\n",stringA, letter) ;     
              else                                                             
                   printf(" %c last occurs as \"%s\"[%d] \n",letter, stringA, n) ; 
 
              if (testno != 1) break;
 
    case  6 : testing("strcopy");
              promptAndGetString(stringA);
              strcopy(stringA,stringB);                  
              printf("Original string is\t\"%s\"\n",stringA);
              printf("..Copied string is\t\"%s\"\n",stringB);
 
              if (testno != 1) break;
 
    case  7 : testing("strhead");
              promptAndGetString(stringA);
              printf("Take how many from head? ");
              scanf(" %i",&n);
              strhead(stringA,stringB,n);                    
              printf(" First %d of \"%s\" is \"%s\"\n",n,stringA,stringB);
 
              if (testno != 1) break;
 
    case  8 : testing("strtail");
              promptAndGetString(stringA);
              printf("Take how many from tail? ");
              scanf(" %i",&n);
              strtail(stringA,stringB,n);                    
              printf(" Last %d of \"%s\" is \"%s\"\n",n,stringA,stringB);
 
              if (testno != 1) break;
 
    case  9 : testing("strmid");
              promptAndGetString(stringA);
              printf("Start from which position? ");
              scanf(" %i",&start);
              printf("Up to      which position? ");
              scanf(" %i",&end);
              strmid(stringA,start,end,stringB);                    
              printf(" \"%s\" [%d .. %d] is \"%s\"\n",stringA,start,end,stringB);
 
              if (testno != 1) break;
 
    case 10 : testing("strnodup");
              promptAndGetString(stringA);
              strnodup(stringA);
              printf(" with duplicates removed is \"%s\"\n",stringA);
 
              if (testno != 1) break;
 
    case 11 : testing("isprefix");
              printf("string1: ");
              promptAndGetString(stringA);
              printf("string2: ");
              promptAndGetString(stringB);
              n=isprefix(stringA,stringB);
              if (n)                                                         
                   printf(" \"%s\" is a prefix of %s\n",stringA, stringB);     
              else                                                             
                   printf(" \"%s\" is NOT a prefix of %s\n",stringA, stringB);     
 
              if (testno != 1) break;
 
    case 12 : testing("Coursework Option A");
              printf("During the coursework part 2 practical test you may\n");
              printf("choose to implement this option (A).  It will be easier\n");
              printf("to implement than option B and, as such, will not gain\n");
              printf("maximum marks - even for a perfect solution. Therefore,\n");
              printf("the penalties and rewards are lower for this option.\n");
              printf("The specification of this option (A) wil be published\n");
              printf("on the day of the test itself.\n");
           
              if (testno != 1) break;
 
    case 13 : testing("Coursework Option B");
              printf("During the coursework part 2 practical test you may\n");
              printf("choose to implement this option (B).  It will be more\n");
              printf("difficult to implement than option A and, as such, will\n");
              printf("permit maximum marks to be gained.  However, a poor\n");
              printf("solution will be marked rigorously.  So the penalties\n");
              printf("and rewards are higher for this option.\n");
              printf("The specification of this option (B) wil be published\n");
              printf("on the day of the test itself.\n");
 
              if (testno != 1) break;
 
    default : printf("SWITCH ERROR: Should never get here!\n");
    } /* end switch */

    testno = promptUserForChoice();
  } /* end while */

  printf("\nBYE :-)\n");
} /* end main */

