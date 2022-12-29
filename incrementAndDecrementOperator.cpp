#include<stdio.h>

int main(){
	int a = 10, b= 100;
	float c = 10.5, d = 100.5;
	
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	printf("c = %f \n",c);
	printf("d = %f \n",d);
	printf("PRE-INCREMENT \n");
	printf("++a = %d \n",++a);
	printf("--b = %d \n",--b);
	printf("++c = %f \n",++c);
	printf("--d = %f \n",--d);
	printf(".............................................\n");
	
	a = 10, b= 100;
	c = 10.5, d = 100.5;
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	printf("c = %f \n",c);
	printf("d = %f \n",d);
	printf("POST-INCREMENT \n");
	printf("a++ = %d \n",a++);
	printf("b-- = %d \n",b--);
	printf("c++ = %f \n",c++);
	printf("d-- = %f \n",d--);
	printf("...........................................\n");
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	printf("c = %f \n",c);
	printf("d = %f \n",d);
	
	return 0;
}
