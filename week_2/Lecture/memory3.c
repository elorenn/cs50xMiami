// wed 2/1/17 week 2

#include<stdio.h>
#include<cs50.h>

/**
 * Outputs the contents of an integer array given the 
 * length of the array contents to display. Also displays
 * the memory address of where the data is located.
 * Author: Ken Loomis
 */
void printArray ( int [], int );

/**
 * Displays the memory address of two pieces of data: an integer and
 * an array. All data has not been properly "cleaned" prior to use.
 * Author: Ken Loomis
 */
int main ( )
{
    // Modify this code so we are given clean data.
    int aNum = 0;
    // Modify this code so we are given clean data.
    int nums [10];
    for ( int i = 0; i<10; i++ )
    {
        nums[i] = 0;
    }
    
    printf ( "aNum = %i stored at %p.\n", aNum, (void*) &aNum );
    printArray ( nums, 10 );

    return 0;
}

void printArray ( int nums [], int size )
{
    
     printf ( "Array = { %i", nums[0] );
     for ( int i=1; i<size; i++ )
     {
        printf ( ", %i", nums[i] ); 
     }
     printf ( " } stored at %p.\n", (void*) &nums[0] );
}