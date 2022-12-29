#include<stdio.h>

int add(int ,int);

int main(){
	
	int first, second, sum;
	
	printf("Enter two integer number: ");
	
	scanf("%d%d",&first,&second);
	
	sum = add(first, second);
	
	printf("first + seconde = %d\n",sum);
	
	return 0;
}

int add(int x, int y){
	return x+y;
}

