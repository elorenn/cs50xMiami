// wed 2/1/17 week 2

#include <stdio.h>
#include <limits.h>


/**
 * Displays the common data types in C and some properties
 * of these data types.
 * Author: Ken Loomis
 */
int main ( )
{
    printf ( "char\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( char ) );
    printf ( "\tmin = %d\n\tmax = %d\n", CHAR_MIN, CHAR_MAX );
    
    printf ( "short\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( short ) );
    printf ( "\tmin = %d\n\tmax = %d\n", SHRT_MIN, SHRT_MAX );
    
    printf ( "int\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( int ) );
    printf ( "\tmin = %d\n\tmax = %d\n", INT_MIN, INT_MAX );
    
    printf ( "unsigned int\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( unsigned int ) );
    printf ( "\tmin = %d\n\tmax = d\n", 0, UINT_MAX );
    
    printf ( "long\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( long ) );
    printf ( "\tmin = %ld\n\tmax = %ld\n", LONG_MIN, LONG_MAX );
    
    printf ( "unsigned long\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( unsigned long ) );
    printf ( "\tmin = %d\n\tmax = %lu\n", 0, ULONG_MAX );

    printf ( "long long\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( long long ) );
    printf ( "\tmin = %lld\n\tmax = %lld\n", LLONG_MAX, LLONG_MAX );
    
    printf ( "float\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( float ) );
    
    printf ( "double\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( double ) );
    
    printf ( "long double\n----------\n" );
    printf ( "\tsize of = %lu\n", sizeof ( long double ) );
}