#include<stdio.h>
 
  int main(){
   
 float base,height,area;
  printf("Enter a base: ");
  
  scanf("%f", &base);

  printf("Enter a height: ");
 
  scanf("%f", &height);

  area=0.5 * base * height;

  printf("Area of the triangle = %.2f\n", area);
  
  return 0;

}
