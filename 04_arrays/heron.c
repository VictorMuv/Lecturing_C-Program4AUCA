#include<stdio.h>
#include<math.h>

  int main(){
  
  float a,b,c,s,x,area;

 printf("Enter one side a: ");

 scanf("%f",&a);

 printf("Enter another side b: ");

 scanf("%f",&b);

 printf("Enter a last  side c: ");

 scanf("%f",&c);

 s=(a+b+c)/2;

 x=s*(s-a)*(s-b)*(s-c);

 area=sqrt(x);

 printf("Area of that triangle = %.2f\n", area);
 
 return 0;

}
