#include<stdio.h>
#include<stdlib.h>

int linearSearch(int * a, int key, int size, int * qty)
// returns the index of key in the array a or -1 if key is not found
{
    int i = 0, pos = 0, found = 0, qty1 = 0;
    
    while (i<size)
    {
        if (a[i] == key) {
           found = 1;
           pos = i;
        }
        else
           i++;
    }
    return found ? pos : -1;
}

main()
{
    int N;          /* how many numbers?         */
    int * nums;     /* where are they ?          */
    int i;          /* loop counter              */
    int key;        /* key to find               */
    int result;     /* result of search          */
    char option;    /* what the user wants to do */

    // Find out how many numbers are needed and dynamically allocate an array
     
    printf("How many numbers? ");
    scanf(" %i", &N);
    nums = malloc(N * sizeof(int));
    
    // Input the numbers one at a time from the standard input stream

    for (i=0; i<N; i++)
    {
        printf("nums[%d] ? ", i);
        scanf(" %i", &nums[i]);
    }
                                                                        
    // What would the user like to do?
    
    printf("Option: (f)ind number or (q)uit?");
    scanf(" %c", &option);
    while (option != 'q') {
        printf("Value to look for? ");
        scanf(" %i", &key);
        
        result = linearSearch(nums,key,N);
        if (result != -1)
           printf("Found %d at position %d\n and occured", key, result);
        else
           printf("Key %d not found\n", key);
       
        printf("Option: (f)ind number or (q)uit?");
        scanf(" %c", &option);
  }
}
