#include<stdio.h>
#include<math.h>

/* The else if statements is used when you want to check more than two conditions.

if (test_condition){

  statements1 

 }

else if (test_condition2){

   statements2 

} 

else {

   statements3
}

 */

int main(){

    int age;

    printf("Enter your age: ");

    scanf("%d", &age);

    if (age < 0 || age >120){

        printf("Invalid age\n");

   }

    else if (age >= 18){

         printf("Congratulations you are eligible to vote!\n");

     }
   
     else {

             printf("Sorry, you are not eligible to vote\n");

             printf("Please come after %d", (18 - age));
    
             printf(" years\n");

  }
    return 0;
}
