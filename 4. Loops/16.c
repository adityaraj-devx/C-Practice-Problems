// 16 — Armstrong Number

// Take a 3-digit number and check whether it is an Armstrong number.

// Example
// Input: 153

// 1³ + 5³ + 3³
// = 1 + 125 + 27
// = 153

// Output:

// Armstrong Number

#include <stdio.h>

int main(){
    int num, sum_of_cube = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int digit = num % 10;
        sum_of_cube += digit * digit * digit;
        num /= 10;
    }
    if (original == sum_of_cube)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
    
    return 0;
}