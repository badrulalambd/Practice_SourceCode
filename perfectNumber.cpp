#include<stdio.h>

int main()
{
	int n, i, sum = 0, remain;
	printf("Enter a number to check it is perfect or not : ");
	scanf("%d",&n);
	
	for(i = 1; i<=n; i++)
	{
		remain = n%i;
		if(remain == 0){        
			sum = sum + i;
		}
	}
	
	if(sum == n){
		printf("%d is a \"PerfectNumber\"\n",n);
	}
	else{
		printf("%d isn't a \"PerfectNumber\"\n",n);
	}
	return 0;
}
