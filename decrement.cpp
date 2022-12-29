#include<stdio.h>

int main(){
	int i,j,k,m;
	
	i = -5, j =1, k = 0, m = 0;
	printf("\ni = %d\nj = %d\nk = %d\nm = %d\n",i,j,k,m);

	printf("\ni = %d\nj = %d\nk = %d\nm = %d\n",m=i+j,++i,++j,k);
	
	printf("\ni = %d\nj = %d\nk = %d\nm = %d\n",i,j,k,m);

	return 0;
}
