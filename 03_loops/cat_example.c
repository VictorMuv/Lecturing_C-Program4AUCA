#include<stdio.h>

   int main(){

      int i = 0;

      while (i <5){

         if (i % 2 == 0){

             printf("X");

          }

          else if (i % 3 == 0){

              printf("Y");
   
          }


         else {

              printf("%d", i);

         }


        i++;
    
    }

    return 0;

   }


