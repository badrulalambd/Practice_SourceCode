#include<stdio.h>

long int fac(int);

int main()
{
	int n;
	long int f;
	printf("Enter a number to calculate the factorial : ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Factorial of nnegative integer isn't defined.\n");
	}
	else{
		f = fac(n);
		printf("%d! = %ld\n",n,f);
	}
	
	return 0;
}

long int fac(int n){
	long int f;
	if(n == 1 || n == 0)
		return 1;
	else{
		f = n*fac(n-1);
		return f;
	}
}
