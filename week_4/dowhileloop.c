#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    int n = 0;
    
    do {
        
        printf("Type a positive number: ");
        n = GetInt();
    } 
    while (n < 0);
    
    printf("Thanks for the postive number (and all the fish)!\n");
    
    return 0;
}