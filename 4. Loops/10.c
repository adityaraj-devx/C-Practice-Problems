// 10. Sum of Digits

// Take an integer and print the sum of all its digits.

// Example:

// Input: 12345

// Output:
// 15


#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0)
    {
        sum += n % 10;
        n/=10;
    }
    printf("sum = %d", sum);
    return 0;
}