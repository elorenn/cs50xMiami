// week 4, monday, 02/13/17


#include <stdio.h>
#include <cs50.h>

// int main (int argc, string argv [] ) {
    
//     if ( argc != 2 ) { 
        
//         return 1;
//     }
//     if ( argv [1] <= 0 ) {
        
//         return -1;
//     }
    
// }

int factorial ( int n ) {
    
    if ( n > 0 ) {
        
        return factorial ( n - 1 ) * n;
        
    } 
    
    return 1;
}


int main ( void ) {
  
  int n;
  
  do {
      
    printf ( "Enter a number: ");
    n = GetInt ();
  
      
  } while ( n < 0 ); 
  
  printf ( "%i!=%i\n", n, factorial(n) );
  
}


// int factorial ( int n ) {
    
//     if ( n == 0 ) {
        
//         return 1;
        
//     } else {
        
//         return factorial ( n - 1 ) * n;
        
//     }
// }


