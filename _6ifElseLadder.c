#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int marks;
	
	printf("Enter your marks: ");
	scanf("%d",&marks);
	
	//if else ladder to find cgpa of a student
	if(marks>=80){
		printf("You got A+\n\n");
	}
	else if(marks>=70){
		printf("You got A-\n\n");
	}
	else if(marks>=60){
		printf("You got B+\n\n");
	}
	else if(marks>=50){
		printf("You got B-\n\n");
	}
	else if(marks>=40){
		printf("You got C\n\n");
	}
	else{
		printf("You failed!!!\n\n");
	}
	
	return 0;
}