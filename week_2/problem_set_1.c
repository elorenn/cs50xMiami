// mon 1/30/17 week 2

/*
    1. promt user for a string "Give me a message: "
    2. store the the input as a variable (named string or whatever)
    3. promt user for a choice bwtn uppercase, lowercase, or swapcase
    4. store their choice in a new variable (lets call it "case")
    5. convert if necessary:
        - iterate through each char in string, checking the case, using a loop:
        - perform tranformation if necessary: 
        
            if the character is uppercase then
                if our case is lowercase or swap then
                    output the lowercase version of the character
            else if the character is lowercase then
                if our case is uppercase or swap then
                    output the uppercase version of the character
            else if neither
                output the character
    6. output new line
    7. consider refractoring code to be simpler/cleaner 
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>



int main( ) {
    
    printf( "Give me a message: ");
    string str = GetString();
    printf("Select (U)pper, (L)ower, or (S)wap case: ");
    char selection = GetChar();
    

    return 0; // good practice to include this for feedback
}