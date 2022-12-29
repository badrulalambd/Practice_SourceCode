//Perfect nummber check...
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int number, sum = 0, i;
	printf("Enter a number to check PerfectNumber\n");
	scanf("%d",&number);
	for(i=1; i<=(number-1); i++){
		if(number%i == 0){
			sum += i;
		}
	}
	if(number == sum)
		printf("%d is a perfect number\n",number);
	else
		printf("%d is not perfect number\n",number);
	return 0;
}
