#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	int a = 10, b = 25, c = 16;
	
	//find the largest number among these three integer number...
	
	if(a>b){
		if(a>c){
			printf("largest number is : %d\n\n", a);
		}else{
			printf("Largest number is : %d\n\n", c);
		}
	}else{
		if(b>c){
			printf("Largest number is: %d\n\n", b);
		}
		else{
			printf("Largest number is : %d\n\n", c);
		}
	}
	
	return 0;
}