// Average of Three Numbers

// Store three numbers in variables.
// Calculate their average.
// Make sure the result can contain decimal values.

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    float avg = (float) (num1 + num2 + num3)/3;
    printf("Average = %.1f\n", avg);
    return 0;
}