#include<stdio.h>
#include<iostream>

using namespace std;

typedef int MYINT;	
typedef struct strct Info;

struct strct{
	int id;
	char ch;
	Info *info;
};

int main()
{
	MYINT x;
	x = 99;
	printf("%d\n",x);
	
	Info info1;
	info1.ch = 'X';
	info1.id = 10;
	printf("Id = %d\nCh = %c\n",info1.id, info1.ch);
	
	return 0;
}
