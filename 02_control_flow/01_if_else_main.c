#include<stdio.h>
#include<math.h>

/* The if else statement is about decision making under certain condition(s).


if (test_condition){

  statements inside if body 

 }

else{

   statements inside else body 

} */

int main(){

    int age;

    printf("Enter your age: ");

    scanf("%d", &age);



    if(age >= 18){

         printf("Congratulations you are eligible to vote!\n");

     }
   
     else {

             printf("Sorry, you are not eligible to vote\n");

             printf("Please come after %d", (18 - age));
    
             printf(" years\n");

  }
    return 0;
}
