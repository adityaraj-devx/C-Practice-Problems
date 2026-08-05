// 1. Largest of Two Numbers - 
// Take two integers from the user and print which one is larger.

// Example:
// Enter first number: 10
// Enter second number: 25
// 25 is larger.

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("The larger number is %d\n", num1);
    }
    else{
        printf("The larger number is %d\n", num2);
    }
    
    return 0;
}