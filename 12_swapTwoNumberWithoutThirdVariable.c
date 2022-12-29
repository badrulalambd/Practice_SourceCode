#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int num1 = 15, num2 = 20;
	
	//swap two numbers without using third variable
	
	printf("Before swapping num1 = %d and num2 = %d\n\n",num1, num2);
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("After swapping num1 = %d and num2 = %d\n\n",num1, num2)	;
	
	
	return 0;
}