//palindrome number check...
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int number,t, reverse = 0, r;
	printf("Enter a number to check palindrome\n");
	scanf("%d",&number);
	t = number;
	while(t != 0){
		r = t%10;
		reverse = reverse*10 + r;
		t = t/10;
	}
	if(number == reverse)
		printf("%d is a palindrome number\n",number);
	else
		printf("%d is not palindrome number\n");
	return 0;
}
