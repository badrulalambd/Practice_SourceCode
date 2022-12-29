#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fact(int);

int main()
{
	int n;
	printf("Enter a number to find the factorial\n");
	scanf("%d",&n);
	printf("Factorial of %d! = %d\n",n,fact(n));
	return 0;
}

int fact(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}
	else
		return n*fact(n-1);
}
