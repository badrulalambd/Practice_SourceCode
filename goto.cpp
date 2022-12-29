#include<stdio.h>

int main()
{
	int n=1234;
	int sum = 0;
	
	point:
		if(n!=0){
			sum = sum + n%10;
			n = n/10;
			goto point;
		}
	printf("%d\n",sum);
	return 0;
}