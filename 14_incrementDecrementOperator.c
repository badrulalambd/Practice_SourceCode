#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int num1 = 20, num2 = 20;
	
	printf("Before increment and decrement operation: \n");
	printf("num1 = %d and num2 = %d\n\n", num1, num2);
	
	printf("After applying increment operation: \n");
	printf("num1 = %d and num2 = %d\n\n", num1++, ++num2);
	printf("num1 = %d and num2 = %d\n\n", num1, num2);
	
	printf("After applying deincrement operation: \n");
	printf("num1 = %d and num2 = %d\n\n", num1--, --num2);
	printf("num1 = %d and num2 = %d\n\n", num1, num2);
	
	
	
	
	return 0;
}