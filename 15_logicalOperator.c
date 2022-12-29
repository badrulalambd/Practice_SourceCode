#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int num1 = 3, num2 = 4;
	int logicalOr, logicalAnd, logicalNot;
	
	logicalOr = (num1>5) || (num2==4);
	logicalAnd = (num1>5) && (num2==4);
	logicalNot = !(num1>num2);
	
	
	printf("logicalOr = %d\n",logicalOr);
	printf("logicalAnd = %d\n", logicalAnd);
	printf("logicalNot = %d\n", logicalNot);
	
	return 0;
}