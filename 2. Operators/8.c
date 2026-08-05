// 8. Reverse a Three-Digit Number

// Take a three-digit number and print its reverse.

// Example:

// Input: 123
// Output: 321

#include <stdio.h>

int main(){
    int num, temp;
    printf("Enter the numeber: ");
    scanf("%d", &num);

    temp = (num % 10) * 100;
    temp += (num % 100) - (num % 10);
    temp += num / 100;

    printf("%d", temp);

    return 0;
}