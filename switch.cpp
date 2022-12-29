#include<stdio.h>

int main()
{
	
	int mark, x;
	
	scanf("%d",&mark);
	
	if(mark<0 || mark>100)
	{
		printf("YOur mark is incorrect..\n");
		return 0;
	}
	x = mark/10;
	
	switch(x)
	{
		case 10:
		case 9:
		case 8:
			printf("Golden\n");
			break;
		case 7:
			printf("A+");
			break;
		case 6:
			printf("A");
			break;
		case 5:
			printf("B");
			break;
		case 4:
			printf("D");
			break;
		default :
			printf("Fail\n");
			break;
	}
	
	return 0;
}
