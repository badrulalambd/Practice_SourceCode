#include<stdio.h>
#include<iostream>

using namespace std;

int primeCheck(int);

int main(){
	int n, i, isPrime;
	printf("Enter an integer number for getting prime factors : ");
	scanf("%d",&n);
	
	for(i=2; i<=n; i++){
		isPrime = primeCheck(i);
		if(isPrime==0)
			printf("%d is NotPrime number\n",i);
		else
			printf("%d is a Prime number\n",i);
	}
	
	return 0;
}

int primeCheck(int n){
	int i;
	for(i=2; i<=(n/2); i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
