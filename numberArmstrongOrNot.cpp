#include<stdio.h>
#include<stdlib.h>

int pow(int,int);
int main()
{
	int in, i, j, digits = 0, remainder, sum = 0, input;
	printf("Enter number: ");
	scanf("%d",&in);
	input = in;
	j = in;
	while(input != 0){
		input = input/10;
		digits++;
	}
	for(i = 1; i<=digits; i++){
		remainder = j%10;
		sum = sum+pow(remainder, digits);
		j = j/10;
	}
	printf("Result: %d\n",sum);
	if(in == sum){
		printf("Armstrong");
	}
	else{
		printf("Not armstrong");
	}
	return 0;
}

int pow(int b, int p)
{
	int sum =1, i;
	for(i = 1; i<=p; i++)
	{
		sum = sum *b;
		return sum;
	}
}
