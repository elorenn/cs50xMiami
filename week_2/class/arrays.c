// wed 2/1/17 week 2

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int main (void) { 

//     int n = 4;
//     int age[n];
    
//     for (int i = 0; i < n; i++) {
        
//         age[i] = GetInt();
//     }

// }

int main (void) { 
    
    // determine number of people
    // give it clean data "0"
    int n = 0;
    
    
    do {
        
        printf("Number of people in the room: ");
        n = GetInt();
    } 
    while (n < 1);
    
    //declare array in which to store ages
    int ages[n];
    
    // get everyone's age
    for (int i=0; i < n; i++) {
        
        printf("Age of person #%i: ", i + 1);
        ages[i] = GetInt();
    }
    
    // report everyone's age a year hence
    printf("Time passess...\n");
    // for (int i = 0; i <n; i++) {
        
    //     printf("A year from now, person #%i will be %i years old.\n");
    // }
    
    // determine years passed
    int y = 0;
    
    do {
        
        printf("How many years have passed: ");
        y = GetInt();
    } 
    while (y < 1);
    
    // declare array in which to store NEW ages
    // int newAges[n];
    
    // calculate everyone's new age
    for (int i=0; i < sizeof(ages) / sizeof(ages[0]); i++) {
        
        char eachAge = ages[i];
        printf("%c\n",eachAge); // this ends up printing GARBAGE data
      
        // printf("#%i: ", i + 1);
        // ages[i] = GetInt();
        // printArray(ages, n);
        

    }
    
}