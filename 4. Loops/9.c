// 9. Reverse a Number

// Take an integer and reverse it.

// Example:

// Input: 12345

// Output:
// 54321

#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0)
    {
        i = n % 10;
        reverse *= 10;
        reverse += i;
        n/=10;
    }
    printf("reverse = %d", reverse);
    return 0;
}