#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	printf("Hello world\n");
	int x = 50;
	int *p;
	p = &x;
	*p = 90;
	printf("%d\n",x);
	return 0;
}
