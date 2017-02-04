/*
a greedy algorithm is one "that always takes the best immediate, or local, solution while finding an answer.
write a program that first asks the user how much change is owed and then spits out the minimum number of 
coins with which said change can be made
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
 {
     float change;
     int count = 0, amount;

     do
     {
         printf("O hai! How much change is owed?\n");
         change = GetFloat();
     }
     while (change < 0);


    
     change *= 100.0;
     amount = (int) round(change);

   
     while (amount >= 25)
     {
         count++;
         amount -= 25;
     }

     
     while (amount >= 10)
     {
         count++;
         amount -= 10;
     }

     // while nickels can be used
     while (amount >= 5)
     {
         count++;
         amount -= 5;
     }

    
     while (amount >= 1)
     {
         count++;
         amount -= 1;
     }

    
     printf("%d\n", count); // print minimum coin

     return 0;
 }