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
	else if(mark<80 && mark>=70)
	{
		printf("A+");
	}
	else if(mark<70 && mark>=60)
	{
		printf("A");
	}
	else if(mark<60 && mark>=50)
	{
		printf("B");
	}
	else if(mark<50 && mark>=40)
	{
		printf("C");
	}
	else if(mark<40 && mark>=33)
	{
		printf("D");
	}
	else if(mark<33)
	{
		printf("Fail");
	}
	
	return 0;
}
