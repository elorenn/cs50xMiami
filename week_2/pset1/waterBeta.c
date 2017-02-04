/* 
a program that prompts the user for the length of his or her shower in minutes (as a positive integer) 
and then prints the equivalent number of bottles of water (as an integer) per the sample output below, 
wherein underlined text represents some user’s input.
For simplicity, you may assume that the user will input a positive integer, so no need for error-checking
(or any loops) this time! And no need to worry about overflow!

minutes: 10
bottles: 120

And if you’d like to play with the staff’s own implementation of water within CS50 IDE, you may execute the below:
~cs50/pset1/water
*/
// ===============================================================================================================
/* 
    1 min = 1.5 gallons
    1 gallon = 128 ounces
    1.5 gallons/min × 128 ounces = 192 ounces of water per minute
    1 bottle = 16 ounces
    192 ounces/min ÷ 16 ounces = 12 bottles of water/min
    10 min x 12 bottles = 120 bottles
*/


#include <stdio.h>
#include <cs50.h>

int main( ) {
    
    int x = 12; // 12 bottles of water/min
    int bottles;
    int minutes;
   
    printf("minutes: ");
    minutes = GetInt();
    // printf("%d %s\n", minutes, "minutes"); // check correct variable is stored
    
    bottles = minutes * x; // multiply minutes by 12 bottles
   
    printf("%s %d\n", "bottles:",bottles);

    return 0; // good practice to include this for feedback
}