// 12. Prime Number

// Take an integer.

// Determine whether it is prime.

// Example:

// Input: 13

// Output:
// Prime
// Input: 12

// Output:
// Not Prime


#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 2; i <(n - 1); i++)
    {
        int check = n % i;
        if (check == 0)
        {
            printf("not prime");
        }
        else
        {
            printf("prime");
        }
        
    }
    
}