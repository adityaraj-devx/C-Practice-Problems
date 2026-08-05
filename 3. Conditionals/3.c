// 3. Divisible by 5 and 11 - 
// Take a number from the user.

// Print whether it is divisible by both 5 and 11.

// Example:
// input: 55
// output: Divisible
// input: 25
// output: Not Divisible

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    
    return 0;
}