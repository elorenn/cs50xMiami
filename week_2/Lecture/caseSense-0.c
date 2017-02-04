// mon 1/30/17 week 2

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

/**
 * Accepts a string as user input and a character that represents whether
 * to convert the string to uppercase, lowercase, or swap the current case.
 * Produces the new string as output to the terminal.
 * Author: Ken Loomis
 */
int main () 
{
    printf ( "Enter a message: " );
    string str = GetString();
    printf ( "Select (U)ppercase, (L)owercase or (S)wapcase: " );
    char choice = GetChar();
    
    int len = strlen ( str );
    for ( int i = 0; i < len; i++ )
    {
        char letter = str [i];
        switch ( choice )
        {
            case 'U':
            case 'u':
                //char letter = toupper ( str[i] );
                if ( str[i] >= 'a' && str[i] <= 'z' )
                    letter = str [i] - ( 'a' - 'A' );
                break;
            case 'L':
            case 'l':
                //char letter = tolower ( str[i] );
                if ( str[i] >= 'A' && str[i] <= 'Z' )
                    letter = str [i] + ( 'a' - 'A' );
                break;
            case 'S':
            case 's':
                if ( str[i] >= 'a' && str[i] <= 'z' )
                    letter = str [i] - ( 'a' - 'A' );
                else if ( str[i] >= 'A' && str[i] <= 'Z' )
                    letter = str [i] + ( 'a' - 'A' );
                break;
        }
        printf ( "%c", letter );
    }
    printf ( "\n" );
    
    return 0;
}
