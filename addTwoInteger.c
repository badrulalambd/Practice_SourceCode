/*
Step 1: Start
Step 2: Declare variables num1, num2 and sum.
Step 3: Read values for num1, num2.
Step 4: Add num1 and num2 and assign the result to a variable sum.
Step 5: Display sum
Step 6: Stop
*/

#include<stdio.h> 

#define MX 10 

int main()
{
	
	// Number of Operation........
	
	int x,y,sum;
	
	printf("Enter two integer number... "); 
	
	scanf("%d%d",&x,&y);
	
	sum = x + y;
	
	printf("%d + %d = %d",x,y,sum);
	
	return 0;
}



