#include<iostream>

using namespace std;

int main(){
	
	int i = -3, j = 1, k = 0, m; 
	m = i++||++j&&++k;
	printf("%d	%d	%d	%d\n",i,j,k,m);
	
	return 0;
}
