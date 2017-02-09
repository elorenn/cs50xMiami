#include <stdio.h>
#include <cs50.h>

/**
 * Creates a 3X3X3 cube representing a maze puzzle game and asks the user for the starting
 * location of the ball. This program may be expanded upon to...
 *   allow for a larger sized maze and 
 *   all for the ball to be moved through the maze
 * Author: Ken Loomis
 */
int main ( void )
{
    bool cube [3][3][3] = { { { 0, 0, 0 }, { 0, 1, 0 } ,{ 1, 0, 1 } },
                            { { 1, 0, 0 }, { 0, 1, 0 } ,{ 1, 0, 1 } },
                            { { 1, 0, 0 }, { 0, 1, 0 } ,{ 1, 0, 1 } } };
    
    int ball [3];
    
    do 
    {
        printf ( "Enter the row location of the ball: " );
        ball [0] = GetInt ( );
    } 
    while ( ball [0] < 0 && ball [0] > 3 );
    
    do 
    {
        printf ( "Enter the column location of the ball: " );
        ball [1] = GetInt ( );
    } 
    while ( ball [1] < 0 && ball [1] > 3 );
    
    do 
    {
        printf ( "Enter the height location of the ball: " );
        ball [2] = GetInt ( );
    } 
    while ( ball [2] < 0 && ball [2] > 3 );
    
    // Check if the ball is in a wall
    if ( cube [ ball[0] ] [ ball[1] ] [ ball[3] ] == true )
    {
        printf ( "This is NOT a valid location for the ball.\n" );
    }
    else
    {
        printf ( "Good. This is a valid location for the ball.\n" );
    }
    
    return 0;
}