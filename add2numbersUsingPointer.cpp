#include<stdio.h>
int add(int *, int *);

int main(){
	int first, second, sum;
	printf("Enter two number to add : ");
	scanf("%d%d",&first,&second);
	sum = add(&first, &second);
	printf("first + second = %d\n",sum);
	return 0;
}

int add(int *p, int *q){
	int x;
	x =  *p + *q;
	return x;
}
