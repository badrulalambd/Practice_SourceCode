#include<stdio.h>

union myStructure{
	char c;
	int a, b;
};

int main(){
	myStructure st1, st2;
	st1.a = 10;
	st1.b = 20;
	st1.c = 'H';
	printf("%d 	 %d	%c\n", st1.a, st1.b, st1.c);
	printf("%d\n",sizeof(myStructure));
}


