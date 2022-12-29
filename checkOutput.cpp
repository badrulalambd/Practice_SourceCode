#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n,m,r,gcd;
	printf("Enter two integers to find the Greates Common Divisor between them : ");
	scanf("%d%d",&n,&m);
	
	r = m%n;
	while(r != 0){
		m = n;
		n  = r;
		r = m%n;
	}
	gcd = n;
	printf("GCD of %d and %d is %d\n",n,m,gcd);
	return 0;
}
