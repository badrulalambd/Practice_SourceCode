#include<stdio.h>

int main()
{
	
	int number;
	
	printf("Enter your number and check it's Odd or Even....");
	scanf("%d",&number);
	
	(number>=100) ? printf("I am the Large number") : printf("I am the Small number ");
	
	return 0;
}
