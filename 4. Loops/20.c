// 20  — Sum of Even and Odd Digits

// Take a positive integer and separately calculate:

// Sum of all even digits
// Sum of all odd digits
// Example

// Input:

// 123456

// Digits:

// Even: 2 + 4 + 6 = 12
// Odd:  1 + 3 + 5 = 9

// Output:

// Sum of even digits = 12
// Sum of odd digits = 9


#include <stdio.h>

int main(){
    int num, digit, even= 0, odd= 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Enter a positive number");
        return 0;
    }

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            even += digit;
        }
        else
        {
            odd += digit;
        }
        num /= 10;
    }

    printf("Sum of even numbers = %d\n", even);
    printf("Sum of odd numbers = %d", odd);
    
    return 0;
}