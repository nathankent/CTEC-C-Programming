#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>

#define DEFAULT_SIZE 1000000
#dL  printf("\n")

/******************************************************************************
 Housekeeping methods...
 *****************************************************************************/
inline void SWAP(int *a, int j, int k)
{
    if (j!=k) {a[j] ^= a[k]; a[k] ^= a[j]; a[j] ^= a[k];}
}

void printArrayP(int * a, int N, int p)
{
    int i = 0;
    while (i < N)
    {
        if ( i % 10 == 0 ) printf("\n%7i ]", i);
        if (i==p)
           printf(" |%5i", a[i]);
        else
           printf("%7i", a[i]);
        i++;
    }
    NL;
}
void printArray(int * a, int N)
{
    int i = 0;
    while (i < N)
    {
        if ( i % 10 == 0 ) printf("\n%7i ]", i);
        printf("%7i", a[i]);
        i++;
    }
    NL;
}
/******************************************************************************
 Sort the array a with size N using a BUBBLE SORT algorithm
 *****************************************************************************/
void bubbleSort( int a[], int N )
{
    int i,j;
    for (i=N-1; i>0; i--) {
        
        #ifdef SHOW
        printf("Bubbling...\n");
        #endif
        
        for (j=0; j<i; j++)
        {
            if (a[j] > a[j+1])
                SWAP(a,j,j+1);
            
            #ifdef SHOW
            printArrayP(a,N,i);printf("\n");
            #endif
        }
    }
}

/**
 * Bubblesort - Uncluttered version without all the SHOW stuff
 */
void bubbleSort_( int a[], int N )
{
    int i,j;
    for (i=N-1; i>0; i--)
        for (j=0; j<i; j++)
            if (a[j] > a[j+1])
                SWAP(a,j,j+1);
}

main(int argc, char ** argv)
{
    int N;          /* how many numbers?         */
    int modulo;
    int * nums;     /* where are they ?          */
    int i;          /* loop counter              */

    // Find out how many numbers are needed and dynamically allocate an array

    printf("To specify array size and seed the random number generator:\n");
    printf("%s <number> <seed>\t e.g. %s 10 47912\n",argv[0],argv[0]);    
    
    N =   (argc > 1) ? atoi(argv[1]) : DEFAULT_SIZE;
    srand((argc > 2) ? atoi(argv[2]) : clock());
    modulo = (int)(pow(10, (floor(log10(N))+1)));
    
    printf("Generating %i random numbers modulo %i\n", N, modulo);
    nums = (int*) malloc(sizeof(int)*N);
    for(i=0; i<N; i++)
        nums[i] = rand() % modulo;


    // Print out the randomly generated sequence
    for(i=0; i<N; i++)
        printf(" %i ", nums[i]);
    printf("\n");

    bubbleSort(nums,N);
    
    // Print out the sorted sequence
    for(i=0; i<N; i++)
        printf(" %i ", nums[i]);
    printf("\n");
}     
