// wed 2/1/17 week 2

#include <stdio.h>
#include <cs50.h>

/**
 * Demonstrates the ability to convert data using coercion
 * or using explicit casting.
 * Author: Ken Loomis
 */
int main ( )
{
    // Update this instruction to cast the data to be an int.
    int age = 21.5; // error: implicit conversion from 'double' to 'int' changes value from 21.5 to 21
    
    printf ( "Age = %i\n", age );
    
}