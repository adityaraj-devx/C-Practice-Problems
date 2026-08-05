// 6. Swap Without a Third Variable
// Take two integers a and b and swap their values without using a third variable.

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n", a);
    printf("%d", b);
    return 0;
}