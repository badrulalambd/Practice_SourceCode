#include<stdio.h>

int main()
{
	int n, t, reverse = 0;
	printf("Enter a number to check if if is a \"Palindrome Number\" : ");
	scanf("%d",&n);
	
	t = n;
	while(t != 0){
		reverse = reverse*10;
		reverse = reverse + t%10;
		t = t/10;
	}
	if(reverse == n)
	{
		printf("%d is a \"Palindrome Number\" \n",n);
	}
	else{
		printf("%d isn't a \"Palindrome Number\" \n",n);
		
	}
	return 0;
}
