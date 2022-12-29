#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int marks, n;
	
	printf("Enter your marks to see the grade: ");
	
	scanf("%d",&marks);
	
	n = marks/10;
	
	switch(n){
		case 10: 
		case 9:
		case 8:
			printf("You got A+\n\n");
			break;
		case 7:
			printf("You got A-\n\n");
			break;
		case 6:
			printf("You got B\n\n");
			break;
		case 5:
			printf("You got B-\n\n");
			break;
		case 4:
			printf("You got C\n\n");
			break;
		default:
			printf("You failed!!!\n\n");
			break;
	}
	
	return 0;
}