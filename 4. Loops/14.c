// 14. Print Prime Numbers

// Take N.

// Print every prime number from

// 2 → N

// Example

// Input: 20

// Output:
// 2 3 5 7 11 13 17 19

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}