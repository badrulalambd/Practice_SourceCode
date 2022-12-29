#include<stdio.h>
#include<iostream>

using namespace std;

int primeCheck(int);

int main()
{
	int n, result;
	printf("Enter an integer number to check prime : ");
	
	scanf("%d",&n);
	
	result = primeCheck(n);
	if(result == 0)
		printf("%d is not Prime number\n",n);
	else
		printf("%d is a Prime number\n", n);
	
	return 0;
}

int primeCheck(int n){
	int i;
	if(n<=1){
		return 0;
	}
	else{
		for(i=2; i<=(n/2); i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
