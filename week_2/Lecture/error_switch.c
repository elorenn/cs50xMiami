// mon 1/30/17 week 2

#include <stdio.h>
#include <cs50.h>

/**
 * This program contains an error which prevents it from executing properly.
 * 
 * Accepts user input in the form of an integer and outputs a message that
 * describes whether the input was an even number or an odd number.
 * Author: Ken Loomis
 */ 
int main ( )
{
	int num = GetInt( );
	switch ( num % 2 )
	{
		case 0: 
			printf ( "%i is even.\n", num );
		case 1: 
			printf ( "%i is odd.\n", num );
	}
}
