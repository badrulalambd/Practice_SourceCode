#include<stdio.h>

int main()
{
	int a;
	float b;
	double d;
	char c;
	
	printf("Enter an integer value\n");
	scanf("%d",&a);
	printf("a = %d\n",a);
	
	printf("Enter a float value\n");
	scanf("%f",&b);
	printf("b = %f\n",b);
	
	printf("Enter a double value\n");
	scanf("%lf",&d);
	printf("d = %lf\n",d);
	
	printf("Enter a character \n");
	scanf(" %c",&c);
	printf("c = %c\n",c);
	
	return 0;
}
