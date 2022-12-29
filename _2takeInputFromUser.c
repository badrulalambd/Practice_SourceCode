#include<stdio.h>

int main()
{

	printf("Welcome to Badrul's Programming world!!! \n");
    int num1, num2;  
    float fraction;     
    char character;

    printf("Enter two integer numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Your numbers are: %d and %d\n\n",num1,num2);
    
    printf("Enter a fraction number: ");
    scanf("%f",&fraction);
    printf("your floating number is: %f\n\n", fraction);
    
    printf("Enter a character: ");
    scanf(" %c",&character);
    printf("Your character is : %c\n\n", character);
    
    
    return 0;
}