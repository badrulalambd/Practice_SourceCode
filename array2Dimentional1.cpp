#include<stdio.h>

int main()
{
	int i, j, arr1[5][3] = {{3,9,12}, {1,2,3}, {2,4,6}, {5,10,15}, {10,20,30}};
	
	printf("\nYour array elements are...\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("arr1[%d][%d] = %d\n",i,j,arr1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
