#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int convertBinaryToDecimal(long long);
int main()
{
	long long n;
	printf("Enter a Binary number : ");
	scanf("%lld",&n);
	printf("%lld in binary = %d in decimal\n",n,convertBinaryToDecimal(n));
	
	return 0;
}

int convertBinaryToDecimal(long long n){
	int decimal = 0, i = 0, remainder;
	while(n != 0)
	{
		remainder = n%10;
		n = n/10;
		decimal = decimal + remainder*pow(2,i);
		i++;
	}
	return decimal;
}
