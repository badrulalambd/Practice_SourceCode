#include<stdio.h>

int main()
{
	
	int x,y,i,c,j,k,n,m;
	c=0;
	
	scanf("%d%d",&n,&m);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			c++;
		}
	}
	
	printf("c = %d\n",c);
	
	return 0;
}
