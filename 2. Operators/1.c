// 1. Basic Arithmetic - 

// Take two integers from the user and print:

// Sum
// Difference
// Product
// Quotient
// Remainder

#include <stdio.h>

int main(){
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 -num2;
    int prod = num1 * num2;
    float quot = (float) num1 / num2;
    int rem = num1 % num2;

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %.2f\nRemainder = %d", sum, diff, prod, quot, rem);

    return 0;
}