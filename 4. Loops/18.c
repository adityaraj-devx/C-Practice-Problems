// 18 — LCM

// find the LCM (Least Common Multiple) of two positive integers.

// Example
// Input:
// 12
// 18


// Output:
// LCM = 36

// Because:

// Multiples of 12: 12, 24, 36, 48...
// Multiples of 18: 18, 36, 54...


// First common multiple = 36

#include <stdio.h>

int main(){
    int num1, num2, start;
    printf("Enter a 1st number: ");
    scanf("%d", &num1);
    printf("Enter a 2nd number: ");
    scanf("%d", &num2);
    
    if (num1 < 1 || num2 < 1)
    {
        printf("Enter a positive number");
        return 0;
    }
    if (num1 > num2)
    {
        start = num1;
    }
    else
    {
        start = num2;
    }
    
    while (1)
    {
        if (start % num1 == 0 && start % num2 == 0)
        {
            printf("LCM = %d", start);
            break;
        }
        start++;
    }
    
    return 0;
}