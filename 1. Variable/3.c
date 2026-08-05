// Swap Two Variables - 

// Store two numbers in variables a and b.
// Swap their values using a third variable.
// Print the values before and after swapping.

#include <stdio.h>

int main(){
    int a = 4;
    int b = 6;

    printf("a = %d and b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("a = %d and b = %d", a, b);


    return 0;
}