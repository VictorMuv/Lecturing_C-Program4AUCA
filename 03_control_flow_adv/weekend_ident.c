#include<stdio.h>

int main(){

	int day_num;

	printf("enter the number of the day: ");
	scanf("%d", &day_num);

	switch(day_num){
	
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Its a week day");
			break;
		case 1:
		case 7:
		
			printf("its a weekend");
			break;
		default:
			printf("Invalid day number.");
			break;
	}
return 0; 
}
