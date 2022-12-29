//Write code for Fibonacci series..
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fibonacci(int);

int main()
{
	int n,i;
	printf("Enter the number of Fibonacci number: ");
	scanf("%d",&n);
	for(i = 0; i<n; i++)
	{
		printf("%d ",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);
	
}
