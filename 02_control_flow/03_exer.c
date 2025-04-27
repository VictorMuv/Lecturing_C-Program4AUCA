#include<stdio.h>
#include<math.h>

int main(){

    double number;

    printf("Enter a number: ");

    scanf("%lf", &number);

    if (number > 0){

        printf("THe number entered is positive\n");

   }

    else if (number < 0){

         printf("The number entered is negative\n");

     }

   else {

        printf("The number is 0\n");

    }

    return 0;
}
