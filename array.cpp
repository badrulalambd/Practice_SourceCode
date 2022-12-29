#include<stdio.h>

int main()
{
	int i, j, arr1[10] = {55,10,44,25,15,80,60,33,40,50};
	
	printf("%d   %d\n",&i,&j);
	
	printf("\nYour array elements are...\n");
	for(i=0; i<10; i++)
	{
		printf("arr1[%d] = %d,	 Memory Location: %d\n",i,arr1[i],&arr1[i]);
	}
	
	return 0;
}
