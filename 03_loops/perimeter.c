#include<stdio.h>
#include<math.h>

  // declaring the main function
  int main(){

  // declaring a variable of which to store the number of sides
  int n;
  printf("how many sides of your figure? ");

  scanf("%d", &n);
  
  float sides[n], perimeter=0.0;
  for (int i=0; i<n; i++) {

      printf("Enter sides %d: ", i+1);

      scanf("%f", &sides[i]);
}
      for (int i=0; i<n; i++){
     
         perimeter+=sides[i];
      
}
   printf(" The perimeter of the given figure is: %.2f\n", perimeter);

return 0;

}
