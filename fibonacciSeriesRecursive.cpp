#include<stdio.h>
#include<iostream>

using namespace std;

int fib(int);

int main()
{
	int i,n;
	i = 0; 
	printf("Enter the value of \"n\" \n");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("%d	",fib(i));
	}
	return 0;
}

//fibonacciseries function.........................
int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}
