#include<stdio.h>

int main()
{
	
	int x,y;
	int *p;
	
	x = 25 ;
	p = &x;
	
	printf("x = %d\n",x);
	printf("&x = %d\n",&x);
	printf("&p = %d\n",&p);
	printf("p = %d\n",p);
	printf("*p = %d\n",*p);
	
	*p = 15;
	printf("\nx = %d\n",x);
	printf("&x = %d\n",&x);
	printf("&p = %d\n",&p);
	printf("p = %d\n",p);
	printf("*p = %d\n",*p);
	
	return 0;
}
