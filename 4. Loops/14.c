//  14 — Count Frequency of a Digit

// Take two integers from the user:

// A number
// A digit to search for

// Then count how many times that digit appears in the number.

// Example
// Enter a number: 1223242
// Enter a digit: 2

// Output:
// 2 appears 4 times

#include <stdio.h>

int main(){
    int number, digit, count = 0;;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit: ");
    scanf("%d", &digit);

    while (number != 0)
    {
        int check = number % 10;
        if (check==digit)
        {
            count++;
        }
        number/=10; 
    }
    printf("count = %d", count);
    return 0;
}