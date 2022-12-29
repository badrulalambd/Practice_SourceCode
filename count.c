#include<stdio.h>

int main()
{
	int count, i, j,k, n;
	
	scanf("%d",&n);
	
	count = 0;
	
	for(i=1; i<=n; i++)	
	{
		for(j=1; j<=n; j++)
		{
			for(k=1; k<=n; k++){
				count++;
			}
		}
	}
	
	printf("n = %d\n count = %d\n",n,count);d

	return 0;
}

//O(n2)
