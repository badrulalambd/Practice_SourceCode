#include<stdio.h>

int main(){
	
		printf("Welcome to Badrul's Programming world!!! \n");
	
	int a,b, sum, sub, mul, div, mod;
	
	printf("Enter two integer numbers to perform arithmatic operation: ");
	scanf("%d%d",&a,&b);
	
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	
	printf("\n\nsum of %d and %d is : %d\n\n",a, b, sum);
	printf("difference between%d and %d is : %d\n\n",a, b, sub);
	printf("multiplication of %d and %d is : %d\n\n",a, b, mul);
	printf("question of %d divided by %d is : %d\n\n",a, b, div);
	printf("remainder of %d divided by %d is : %d\n\n",a, b, mod);
	
	return 0;
}