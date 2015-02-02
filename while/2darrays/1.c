#include <stdio.h>

#define ROWS 20
#define COLS 20
#define ON   'X'
#define OFF  ' '

main()
{    
    char grid[ROWS][COLS];    /* the grid */
    int i, j;                /* counters */

    for ( i = 0; i < ROWS; i++ )
        for ( j = 0; j < COLS; j++ ) 
            grid[i][j] = (i <= j) ? ON : OFF;
        
    /* Print out the grid */
    for ( i = 0; i < ROWS; i++ )
    {
        for ( j = 0; j < COLS; j++ )
        {
            printf( " %c", grid[i][j] );
        }
        printf("\n");
    }
}
