#include<stdio.h>

int main()
{
	
	int x,y;
	int *p;
	int **pp;
	
	x = 10;
	p = &x;
	pp = &p;
	
	printf("x = %d\n",x);
	printf("&x = %d\n",&x);
	printf("&p = %d\n",&p);
	printf("p = %d\n",p);
	printf("pp = %d\n",pp);
	//rintf("&(*pp) = %d\n",&(*pp));
	printf("*p = %d\n",*p);
	printf("**pp = %d\n",**pp);
	printf("*pp = %d\n",*pp);
	
	*p = 15;
	printf("\nx = %d\n",x);
	printf("&x = %d\n",&x);
	printf("&p = %d\n",&p);
	printf("p = %d\n",p);
	printf("pp = %d\n",pp);
	printf("*p = %d\n",*p);
	printf("&pp = %d\n",&pp);
	
	return 0;
}
