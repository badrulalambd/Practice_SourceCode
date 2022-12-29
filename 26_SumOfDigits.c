#include<stdio.h>  
int main()    
{    

	printf("Welcome to Badrul's Programming world!!! \n\n");
	
	printf("Calculate the sum of digits\n\n");

	int n,sum=0,m;    
	printf("Enter a number:");    
	scanf("%d",&n);    
	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
		n=n/10;    
	}    
	printf("Sum is = %d",sum);    
	return 0;  
}   