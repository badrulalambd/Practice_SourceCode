#include<stdio.h>

int main()
{
	int n,  sum;
	
	scanf("%d",&n);
	
	sum = n * (n+1)/2;
	
	printf("sum = %d\n",sum);
	
	return 0;
}

//O(1)
