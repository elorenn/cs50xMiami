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
 * Displays the memory address and contents of three pieces of data: an integer
 * an two arrays. The arrays are declared using two different techniques.
 * Author: Ken Loomis
 */
int main ( )
{
    int aNum = 5;
    int nums [] = {1, 2, 3, 4, 5};
    int nums2 [10];
    
    printf ( "aNum = %i stored at %p.\n", aNum, (void*) &aNum );
    printArray ( nums, 5 );
    printArray ( nums2, 10 );
    
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