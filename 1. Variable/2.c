// Sum of Two Numbers - 
// Take two integer variables and store values in them.
// Print their sum.

#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Enter 1st number - ");
    scanf("%d", &num1);
    printf("Enter 2nd number - ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum of 1st and 2nd number is %d\n", sum);

    return 0;
}