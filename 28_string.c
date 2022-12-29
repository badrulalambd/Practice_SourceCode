#include <stdio.h>

int main()
{   

 	printf("Welcome to Badrul's Programming world!!! \n\n");

    // array to store string taken as input
    char sentence[20];
    
    // take user input
    printf("Enter any sentence: ");
    
    // use scanf to get input
    scanf("%[^\n]%*c",sentence);
    
    // printing the input value
    printf("You entered: %s.", sentence);
    
    return 0;
}
