// mon 1/30/17 week 2

/*
prompt the user for a string "Give me a message: "
store the input as a variable string
prompt user for a choice of upper, lower or swapcase
remember which they chose - store it in a variable "case" 
iterate through each char in string, checking the case using a loop
    if the character is uppercase then
        if our case is lowercase or swap then
            output the lowercase version of the character
    else if the character is lowercase then
        if our case is uppercase or swap then
            output the upperrcase version of the character
    else if neither
        output the character
output newline
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ( )
{
    printf ( "Give me a message: " );
    string str = GetString ( );
    printf ( "Select (U)pper, (L)ower, (S)wap case: " );
    char selection = GetChar ( );
    
    int length = strlen ( str );
    for ( int i = 0; i < length; i++ )
    {
        if ( str [i] >= 'A' && str [i] <= 'Z' )
        {
            if ( selection == 'L' || selection == 'S' )
            {
                char c = (char) ( (int) str[i] + 32 );
                printf ( "%c", c );
            }
            else
            {
                printf ( "%c", str[i] );
            }
        }
        else if ( str [i] >= 'a' && str [i] <= 'z' )
        {
            if ( selection == 'U' || selection == 'S' )
            {
                char c = (char) ( (int) str[i] - 32 );
                printf ( "%c", c );
            }
            else
            {
                printf ( "%c", str[i] );
            }
        }
        else
        {
            printf ( "%c", str[i] );
        }
    }
    printf ( "\n\n\n\n\n" );
    return 0;
}