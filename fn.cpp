#include<stdio.h>
#include<math.h>
#include<string.h>


int add(int a, int b)
{
	return a+b;
}

int main()
{
	
	int x,y,sum;
	int i;
	for(i = 0; i<10000; i++)
	{
		scanf("%d%d",&x,&y);
		sum = add(x,y);
		printf("sum = %d\n",sum);
	}
	
	return 0;
}

