//C code to convert a decimal number into binary number..
#include<stdio.h>                                                                                                                                         
#include<math.h>

#include<iostream>

using namespace std;

long long convertDecimalToBinary(int);
int main()
{
	int n;
	printf("Enter a Decimal number : ");
	scanf("%d",&n);
	printf("\n%d in decimal = %lld in binary\n",n,convertDecimalToBinary(n));
	return 0;
}

long long convertDecimalToBinary(int n){
	long long binary = 0;
	int remainder, i = 1, step = 1;
	while(n != 0)
	{
		remainder = n%2;
		printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n",step++,n,remainder,n/2);
		n = n/2;
		binary = binary + remainder*i;
		i = i*10;
	}
	return binary;
}
