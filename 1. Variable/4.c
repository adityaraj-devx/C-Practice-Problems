// Simple Calculator - 

// Create two integer variables.
// Calculate and print their:
// Addition
// Subtraction
// Multiplication
// Division
// Remainder

#include <stdio.h>

int main(){
    int num1, num2;

    printf("Enter 1st number - ");
    scanf("%d", &num1);
    printf("Enter 2nd number - ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int multi = num1 * num2;
    float div = (float) num1 / num2;
    int rem = num1 % num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Multiplication = %d\n", multi);
    printf("Division = %f\n", div);
    printf("Remainder = %d\n", rem);

    return 0;
}