#include <stdio.h>
#include <cs50.h>

// wed 1/15/17 day 2

int main(void) {
    
    printf("give me an int");
    int x = GetInt();
    
    if(x > 5)
    {
        //printf("x is bigger than 5\n");
        printf("%d %s\n", x, "is bigger than 5");
        
        
        if(x < 10) {
            //printf("x is less than 10 too\n");
            printf("%d %s\n", x, "is less than 10 too");
        }
    }
    else 
    {
        //printf("x is neither 5 nor 10\n");
        printf("%d %s\n", x, "is neither smaller than 5 nor bigger than 10");
    }
    
}