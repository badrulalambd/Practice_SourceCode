#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int a, b;
	
	printf("Enter two integer number: ");
	scanf("%d%d",&a, &b);
	
	//print the large number between two integer
	if(a>b){
		printf("Large number is : %d\n\n", a);
	}
	else{
		printf("Large number is : %d\n\n", b);
	}
	
	return 0;
}