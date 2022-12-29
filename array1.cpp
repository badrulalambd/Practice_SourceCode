#include<stdio.h>

int main()
{
	int i, j, arr1[10];
	
	printf("Enter 10 integer value...\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nYour array elements are...\n");
	for(i=0; i<10; i++)
	{
		printf("arr1[%d] = %d\n",i,arr1[i]);
	}
	
	return 0;
}
