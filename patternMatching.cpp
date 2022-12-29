#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n,count = 1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(j=1; j<=(n-i); j++){
			printf(" ");
		}
		for(k=1; k<=count; k++){
			printf("*");
		}
		printf("\n");
		count = count + 2;
	}
	return 0;
}
