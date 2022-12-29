/*
	Armstrong number is a number that is equal to the sum of cubes of its digits. 
	For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int pow(int, int);
int check_armstrong(int);

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
		remainder = input%10;
		sum = sum + pow((double)remainder, (double)3);
		input = input/10;
	}
		
	if(in == sum){
		return 1;
	}else{
		return 0;
	}
}

