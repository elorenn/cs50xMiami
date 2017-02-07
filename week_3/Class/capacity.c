// mon 2/6/17 week 3

#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main () {
    
    // declare variables:
    int count = 0;
    string entry = "";
    
    // prompt the user:
    printf("Enter the student's names (1 per line). Type \"done\" when finished.");
    
    do {
        
        entry = GetString();
        
        if ( strcmp (entry, "done") != 0 && count < CAPACITY ) {
            // add the entry to the array at the next available postion:
            student [count] = entry;
            // then increase the value of the count:
            count ++; 
            /* remember that unless you set the array's data to null, it contains dirty data
               if all you're doing is counting - ie how many things in array - this doesn't matter
               but if you need to access the data inside the array, then it does matter
            */
        }
    }
    
    while (strcmp (entry, "done") != 0 && count < CAPACITY);
}
