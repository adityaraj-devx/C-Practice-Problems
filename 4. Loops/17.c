// 17 — GCD (HCF)

// Write a C program that takes two positive integers and finds their GCD (Greatest Common Divisor).

// Example 1
// Input:
// 12
// 18


// Output:
// GCD = 6

// Because:

// Factors of 12: 1 2 3 4 6 12
// Factors of 18: 1 2 3 6 9 18


// Greatest common factor = 6


#include <stdio.h>

int main(){
    int limit, num1, num2, gcd=1;
    printf("Enter a 1st number: ");
    scanf("%d", &num1);
    printf("Enter a 2nd number: ");
    scanf("%d", &num2);

    if (num1 < 1 || num2 < 1)
    {
        printf("Enter a positive number");
        return 0;
    }
    if (num1 < num2)
    {
        limit = num1;
    }
    else
    {
        limit = num2;
    }
    for (int i = 1; i <= limit; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
        
    }

    printf("GCD = %d", gcd);
    
    return 0;
}