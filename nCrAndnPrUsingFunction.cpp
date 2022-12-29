#include<stdio.h>

#include<iostream>

using namespace std;

long find_ncr(int,int);
long find_npr(int,int);
long factorial(int);

int main()
{
	int n,r;
	long ncr,npr;
	printf("Enter the value of n and r : ");
	scanf("%d%d",&n,&r);
	
	ncr = find_ncr(n,r);
	npr = find_npr(n,r);
	
	printf("%dC%d = %ld\n",n,r,ncr);
	printf("%dP%d = %ld\n",n,r,npr);
	
	return 0;
}

long find_ncr(int n, int r)
{
	long result;
	result = factorial(n)/factorial(r)*factorial(n-r);
	return result;
}

long find_npr(int n, int r)
{
	long result;
	result = factorial(n)/factorial(n-r);
	return result;
}

long factorialloop(int n)
{
	int i;
	long result = 1;
	for(i = 1; i<=n; i++){
		result = result*i;
	}
	return result;
}

long factorial(int n)
{
	if(n<=0)
		return 1;
		else
			return (n*factorial(n-1));
}
