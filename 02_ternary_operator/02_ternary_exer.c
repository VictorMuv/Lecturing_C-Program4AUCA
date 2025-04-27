


// test_condition? expression1 : expression2;
// here you can see three operations hence the ternary op naming. 
#include<stdio.h>
  

 int main(){

    int number;

    printf("Enter a number :");

    scanf("%d", &number);

    (number %2 != 0) ? printf("The number is Odd\n") :
                  printf("The number is Even\n");

return 0;
 }
