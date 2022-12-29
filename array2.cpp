#include<stdio.h>

int main()
{
	int i, j;
	float arr1[10];
	
	printf("Enter 5 float values...\n");
	for(i=0; i<5; i++)
	{
		scanf("%f",&arr1[i]);
	}
	printf("\nYour array elements are...\n");
	for(i=0; i<5; i++)
	{
		printf("arr1[%d] = %f\n",i,arr1[i]);
	}
	
	return 0;
}
