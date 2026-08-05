// 8. Count Digits

// Take an integer and count how many digits it contains.

// Example:

// Input: 987654

// Output:
// 6 digits

#include <stdio.h>

int main(){
    int n;
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    printf("No. of digits = %d", i);
    return 0;
}