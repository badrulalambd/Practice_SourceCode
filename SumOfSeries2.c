#include<stdio.h>

int main()
{
	int n,i,sum;
	
	scanf("%d",&n);
	
	sum = 0;
	
	for(i=1;   i<=n;   i++)
	{
		sum = sum + i;
	}
	
	
	printf("sum = %d\n",sum);
	
	return 0;
}

//O(n)
