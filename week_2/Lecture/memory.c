// wed 2/1/17 week 2

#include<stdio.h>
#include<cs50.h>

/**
 * Displays the memory address of three pieces of data: an integer
 * an two arrays. The arrays are declared using two different techniques.
 * Author: Ken Loomis
 */
int main ( )
{
    int aNum = 5;
    int nums [] = {1, 2, 3, 4, 5};
    int nums2 [10];
    
    printf ( "aNum = %i stored at %p.\n", aNum, (void*) &aNum );
    printf ( "nums[0] = %i stored at %p.\n", nums[0], (void*) &nums );
    printf ( "nums2[0] = %i stored at %p.\n", nums2[0], (void*) &nums2 );
    
    return 0;
}