#include<stdio.h>
#include<stdlib.h>

long add(long*, long*);

int main(){
	int x,y,z;
	x = 10, y = 11, z = 12;
	int *ptr1, **ptr2;
	printf("x = %d, y = %d, z = %d\n",x,y,z);
	printf("%d, %d\n",&ptr1, &ptr2);
	
	ptr1 = &x;
	ptr2 = &ptr1;
	printf("%d %d %d\n",&x, ptr1, ptr2);
	printf("%d %d %d\n",x, *ptr1, **ptr2);
	**ptr2 = 50;
	printf("%d %d %d\n",x, *ptr1, **ptr2);
	
	printf("%d %d %d\n",*ptr2, ptr1,&x);
	return 0;
}

