#include<stdio.h>

int main()
{
	int ar[5] = {5,3,8};
	
	printf("%d\n",&ar[0]);
	printf("%d\n",ar);
	printf("%d\n",*ar);
	
	printf("%d\n",*(ar+1));
	printf("%d\n",*(ar+2));
	
	return 0;
}
