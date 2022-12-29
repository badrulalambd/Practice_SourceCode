#include<stdio.h>

int main(){
	
	printf("Welcome to Badrul's Programming world!!! \n");
	
	
	char c;
	
	printf("Enter your character to check it is vowel or not: ");
	scanf("%c",&c);
	
	if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
		printf("%c is a Vowel\n\n", c);
	}
	else{
		printf("%c is not a Vowel\n\n", c);
	}
	
	
	return 0;
}