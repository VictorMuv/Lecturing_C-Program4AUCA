#include<stdio.h>
#include<math.h>


int main(){
   
    float sides[3], s, area;
    float product=1.0;
    float semi_per=0.0;

    printf("Enter all the sides separated by spaces: ");

    for (int i=0; i < 3; i++) {

        scanf("%f", &sides[i]);
}

     // verifying that sides are all positive

    if (sides[0] <= 0 || sides [1] <= 0 || sides[2] <= 0) {

      printf("Error: All sides must be positive.\n");
      return 1;

}

   if (sides[0] + sides [1] <=sides[2] ||

      sides[0] + sides [2] <= sides [1] ||
   
      sides[1] + sides [2] <= sides [0]) {

     printf("Error: Invalid traingle.\n");
  
     return 1; 

 }
      
 
    // calculating  the semi-perimeter & product


    for (int i=0; i < 3; i++) {

    semi_per+=sides[i];
    s=semi_per/2;
}

    for (int i=0; i < 3; i++){    
    product*=(s-sides[i]);
}

    area=sqrt(s*product);
    printf("Area= %.2f\n", area);
   
    return 0;
}
