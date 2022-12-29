#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter two ineger values....");
	scanf("%d%d",&x,&y);
	
	//ternary operator
	(x>y) ? printf("%d is greater than %d\n",x,y) : printf("%d is less than %d",x,y);
	
	return 0;
}
