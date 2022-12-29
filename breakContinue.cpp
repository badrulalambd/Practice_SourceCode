#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int i,j,count;
	i =  0;
	for(;;){
		i++;
		if(i%2 == 0)
			continue;
		printf("%d	",i);
		if(i>=100)
			break;
	}
	return 0;
}
