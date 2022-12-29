//Fibonacci series using recursion
#include<stdio.h>
#include<iostream>

using namespace std;

void fib(int n1, int n2){
	int f; 
	f = n1 + n2;
	if(f<=50){
		printf("%d  ",f);
		n1 = n2; 
		n2 = f;
		fib(n1, n2);
	}
}

int main()
{
	int n1, n2, fibo;
	n1 = 0, n2 = 1; 
	fib(n1, n2);
	return 0;
}
