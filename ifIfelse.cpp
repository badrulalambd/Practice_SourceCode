#include<stdio.h>

int main()
{
	
	int mark;
	
	printf("Enter your marks....");
	scanf("%d",&mark);
	
	if(mark>=80 && mark<=100)
	{
		printf("Golden");
	}
	if(mark<80 && mark>=70)
	{
		printf("A+");
	}
	if(mark<70 && mark>=60)
	{
		printf("A");
	}
	if(mark<60 && mark>=50)
	{
		printf("B");
	}
	if(mark<50 && mark>=40)
	{
		printf("C");
	}
	if(mark<40 && mark>=33)
	{
		printf("D");
	}
	if(mark<33)
	{
		printf("Fail");
	}
	
	return 0;
}
