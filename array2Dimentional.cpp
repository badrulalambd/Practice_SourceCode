#include<stdio.h>

int main()
{
	int i, j, arr1[5][3];
	
	printf("Enter 15 integers value...\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",arr1[i][j]);
		}
	}
	printf("\nYour array elements are...\n");
	for(i=0; i<10; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("arr1[%d][%d] = %d\n",i,j,arr1[i][j]);
		}
	}
	
	return 0;
}
