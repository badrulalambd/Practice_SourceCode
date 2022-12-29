//Write code for Fibonacci series..
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	printf("Fibbonacci Series:\n");
	int a,b,c,n;
	a = 0, b = 1;
	printf("Enter the number Fibonacci number: ");
	scanf("%d",&n);
	while(n>0)
	{
		c = a;
		a = b;
		b = a + c;
		printf("%d ",c);
		n--;
	}
	return 0;
}
