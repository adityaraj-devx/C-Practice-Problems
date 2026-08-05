// 5. Simple Expression - 

// Take three integers a, b, and c.

// Calculate:

// result = (a + b) * c

// Then calculate:

// result2 = a + b * c

// Print both results and observe the difference.

#include <stdio.h>

int main(){
    int a, b, c, result1, result2;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    result1 = (a + b) * c;
    result2 = a + b * c;

    printf("1st Result: %d\n", result1);
    printf("2nd Result: %d\n", result2);

    return 0;
}