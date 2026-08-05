// 10. Simple Calculator with Choice

// Take:
// First number
// Second number
// Operator

// Example:
// +
// -
// *
// /
// %
// Print the result based on the chosen operator.

#include <stdio.h>

int main(){
    int num1, num2;
    char opr;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &opr);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (opr == '+')
    {
        float result = num1 + num2;  
        printf("Result: %.2f", result);
    }
    else if(opr == '-')
    {
        float result = num1 - num2;  
        printf("Result: %.2f", result);
    }
    else if(opr == '*')
    {
        float result = num1 * num2;  
        printf("Result: %.2f", result);
    }
    else if(opr == '/')
    {
        float result = (float) num1 / num2;  
        printf("Result: %.2f", result);
    }
    else if (opr == '%')
    {
        int result = num1 % num2;  
        printf("Result: %d", result);
    }

    return 0;
}