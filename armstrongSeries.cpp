/*
	Armstrong number is a number that is equal to the sum of cubes of its digits. 
	For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	
	Armstrong number C program to check whether a number is an Armstrong number or not, it's a number 
	that is equal to the sum of digits raise to the power total number of digits in the number. 
	Some Armstrong numbers are: 0, 1, 2, 3, 153, 370, 407, 1634, 8208
	
	abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... 
	
*/

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int check_armstrong(int);

int pow(int, int);

int main()
{
	int in, i;
	printf("Enter number: ");
	scanf("%d",&in);
	for(i = 1; i<=in; i++)
	{
		if(check_armstrong(i) == 1){
			printf("%d is a armstrong number\n",i);
			
		}
	}
	return 0;
}

int check_armstrong(int in)
{
	int i, j, digits = 0, remainder, sum = 0, input;
	input = in;
	j = in;
	while(input != 0){
		input = input/10;
		digits++;
	}
		
	for(i=1; i<=digits; i++){
		remainder = j%10;
		sum = sum + pow(remainder,digits);
		j = j/10;
	}
	
	if(in == sum){
		return 1;
	}else{
		return 0;
	}
}

int pow(int n, int r){
	int i,p = 1;
	for(i=1; i<=r; i++){
		p = p*n;
	}
	return p;
}

