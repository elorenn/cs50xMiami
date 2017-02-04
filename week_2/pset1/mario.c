/*
Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend a "half-pyramid" of blocks 
before leaping (if he wants to maximize his score) toward a flag pole. 
prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23
generate the half-pyramid. 
Take care to align the bottom-left corner of your half-pyramid with the left-hand edge 
of your terminal window:
height: 8
       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########
*/


#include <stdio.h>
#include <cs50.h>

int main( ) { 
    
    int height;
    int rows;
    int empty; 
    int block;
    
    printf("height: ");
    height = GetInt();

    while ( (height < 0) || (height > 23) ) {  // make sure height is between 0 and 23
       
        printf("height: ");
        height = GetInt();
        
    };
    
    for ( rows = 1; rows <= height; rows++ ) { // starting with 2 blocks, until the number of rows equals the height
        
        for (empty = (height - rows); empty > 0; empty--)
        {
            printf(" "); 
        }
 
        for (block = 1; block <= (rows + 1); block++)
        {   
            printf("%s", "#");
        }
 
        printf("\n");
        
    };
    
    return 0;
}



