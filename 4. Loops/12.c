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

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

    return 0;
}