#include<stdio.h>

//global variable
int x, y;

int main(){
	
	//local variable
	int sum;
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	printf("Enter the value of x and y: ");
	scanf("%d%d",&x, &y);
	
	sum = x + y;
	
	printf("Sum = %d\n\n", sum);
	
	
	return 0;
}