/* switch statement is used when we have many decision to consider.

usinf if else statement could only be messy.

Here is the switch statement syntax;

switch(variable/expression) {
     case value1:

           // body of case 1
    
           break;

       case value1:

           // body of case 1
    
           break;

       case valueN:

           // body of case N
   
           break;

       default:

           // body of default

  }
      */

#include<stdio.h>

    int main(){

        int day_num;

        printf("Enter the day's number: ");
        
        scanf("%d", day_num);

       switch (day_num) {

            case 1:
           
           printf("Sunday");

            break;

            case 2:

           printf("Monday");

            break;

            case 3:

           printf("Tuesday");

            break;

            case 4:

           printf("Wednesday");

            break;

            case 5:

           printf("Thursday");

            break;

            case 6:

           printf("Friday");

            break;

            case 7:

           printf("Saturday");

            break;

  }



                  







 }
