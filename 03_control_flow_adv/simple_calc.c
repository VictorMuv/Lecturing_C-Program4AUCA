#include<stdio.h>

 int main(){
   

  char operation;

  printf("enter an operation ['+' , '-', '*', '/']: ");

  scanf( "%c", &operation);

  float num1,num2;

  printf("enter a number: ");

  scanf("%f", &num1);

  printf("enter a second number: ");

  scanf("%f", &num2);
 

  float result;

  switch(operation){

	  case '+':

 		 result = num1 + num2;

 		 break; 

  	  case '-':

  		 result = num1 - num2;

 		  break;
	  
           case '*':

 		 result = num1 * num2;

 		 break; 

  	   case '/':

 		 result = num1 / num2;

 		 break;  

  }

	printf("The result is: %.2f\n", result); 

	return 0;
 }
