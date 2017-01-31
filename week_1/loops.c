#include <stdio.h>
#include <cs50.h>

// wed 1/15/17 day 2

// int main(void) {
    
//     int student;
//     student = 20;
    
//     while(student > 0) {
        
//         printf("Hello\n");
//         student --;  //this subracts one at a time from 20
//     }
// }



// int main(void) {
    
//   for(int student = 20; student > 0; student --) {
       
//       printf("Hello\n");
//   }
// }



// a do-while loop will always run at least once
// great for getting intput from user

// int main(void) {
    
//     int student;
 
//     do {
//         printf("Give me a number: ");
//         student = GetInt();
        
//     } while(student <1);
    
//         for (student = 20; student >0; student--) {
            
//             printf("Hello\n");
//         }
 
// }



int main(void) {
    
    int student;
 
    do {
        
        printf ("Give me a positive number: ");
        student = GetInt();
        otherStudent = GetInt();
        
    } while (student < 1);
    
    
    while (student > 0)
     
        {
            printf ("HELLO\n");
            student--;
        }
        
    printf("\n");   
    
    for (int i = 0; i < otherStudent; i++) {
        
        printf("hello\n");
    }
}
// ^the do-while loop will always excecute at least once
// ^the while loop might never excecute

