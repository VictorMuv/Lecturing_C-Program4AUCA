#include<stdio.h>

 int main(){

  //here we will learn to request input from users and store them in variables
  int age;
  char letter;
  printf("Enter your age and letter: ");

  scanf("%d %c", &age,&letter);

  printf("your age is: %d years old and  your letter is: %c\n", age,letter);


  return 0;

}


