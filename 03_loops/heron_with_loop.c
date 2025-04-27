#include<stdio.h>
#include<math.h>


int main(){
   
    float sides[3], s, area;
    float product=1.0;

    printf("Enter all the sides separated by spaces: ");

    for (int i=0; i < 3; i++) {

        scanf("%f", &sides[i]);
}
    // calculating  the semi-perimeter

    s=(sides[0]+sides[1]+sides[2])/2;

    for (int i=0; i < 3; i++) {
    
    product*=(s-sides[i]);
}

    area=sqrt(s*product);
    printf("Area= %.2f\n", area);
   
    return 0;
}
