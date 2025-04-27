#include<stdio.h>

int main(){
//creating student details, declaring variables
char name[50];
int age;
float height;
char grade;

// inputing data in the variables 

    printf("Enter Student Details:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Height: ");
    scanf("%f", &height);
    printf("Grade: ");
    scanf(" %c", &grade);

// print out student details
   printf("\nStudent Details:\n");
   printf(" Name: %s\n ", name);
   printf(" Age: %d\n ", age);
   printf(" Height: %f\n ", height);
   printf(" Grade: %c ", grade);

return 0;
}

