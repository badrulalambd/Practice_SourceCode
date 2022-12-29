#include<stdio.h>
#include<math.h>
#include<String.h>





int main()
{	
	int i,j,k;
	int ar[1000];
	
	for(i=0; i<10; i++)
	{
		printf("Hello\n");
		for(j=0; j<3; j++)
		{
			printf("Its nested loop\n");
			
			for(k=0; k<2; k++)
			{
				printf("ar[%d] = \n",i);
			}
		}
	}
	
	return 0;
}
