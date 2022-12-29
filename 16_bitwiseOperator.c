#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int num1 = 3, num2 = 4;
	int bitwiseOr, bitwiseAnd, bitwiseXor, bitwiseNot, leftShift, rightShift;
	
	bitwiseOr = num1 | num2;
	bitwiseAnd = num1 & num2;
	bitwiseXor = num1 ^ num2;
	bitwiseNot = (~num1);
	leftShift = num1<<1;
	rightShift = num2>>1;
	
	printf("\n\nnum1 = %d and num2 = %d\n\n", num1, num2);
	
	printf("bitwiseOr, num1 | num2 = %d\n",bitwiseOr);
	printf("bitwiseAnd, num1 & num2 = %d\n", bitwiseAnd);
	printf("bitwiseXor, num1 ^ num2 = %d\n", bitwiseXor);
	printf("bitwiseNot, (~num1) = %d\n", bitwiseNot);
	printf("leftShift, num1<<1 = %d\n", leftShift);
	printf("rightShift, num2>>1 = %d\n", rightShift);
	
	
	return 0;
}