#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fact(int);
int main()
{
	int n;
	printf("Enter a number to calculate the factorial: ");
	scanf("%d",&n);
	printf("Factorial of %d! is : %d\n",n,fact(n));
	return 0;
}

int fact(int n)
{
	int i, fac = 1;
	if(n == 0 || n == 1)
	{
		return 1;
	}
	for(i = 2; i <= n; i++)
	{
		fac = fac*i;
	}
	return fac;
}
