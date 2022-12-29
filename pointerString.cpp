#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main(){
	
	char *str[] = {"hello","guys","ok","alam","is","badrul!","ch"};
	int ar[] = {4, 2, 5, 9};
	
	printf("%d	%d\n",sizeof(str), strlen(str[0]));
	
	printf("%u	%u\n",sizeof(str), strlen(str[0]));
	
	printf("%d	%d	%d\n",ar, &ar[0], &ar);
	
	printf("%u	%u	%u\n",ar, &ar[0], &ar);
	
	printf("%d	%d	%d\n",*(ar+0),*(ar+1), *(ar+2));
	
	return 0;
}
