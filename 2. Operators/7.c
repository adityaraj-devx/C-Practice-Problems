// 7. Last Digit - 

// Take an integer from the user and print its last digit.

// Example:

// Input: 12345
// Output: 5

#include <stdio.h>

int main(){
    int num;
    printf("Enter the numeber: ");
    scanf("%d", &num);

    int temp = num % 10;
    printf("last digit: %d", temp);

    return 0;
}