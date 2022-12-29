#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	
	int x = 1;
	
	//find even number using goto statement
	
	myState:
		
	if(x%2 == 0)
		printf("%d\n",x);
		x++;
	if(x<21)
		goto myState;
	
	
	return 0;
}