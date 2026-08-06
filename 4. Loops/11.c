// 11. Palindrome Number

// Take an integer from the user.

// Print whether it is a palindrome.

// Example
// Input: 121
// Output: Palindrome
// Input: 123
// Output: Not Palindrome

#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num = n;
    
    while (n != 0)
    {
        i = n % 10;
        reverse *= 10;
        reverse += i;
        n/=10;
    }

    if (num == reverse)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}