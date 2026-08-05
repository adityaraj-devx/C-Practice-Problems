// 5. Multiplication Table

// Take a number from the user and print its multiplication table up to 10.

// Example:

// Enter a number: 7

// 7 x 1 = 7
// 7 x 2 = 14
// ...
// 7 x 10 = 70


#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for ( int i = 1; i <= 10; i++)
    {
        int result = num * i;
        printf("%d x %d = %d\n", num, i, result);
    }

    printf("\n\n");

    int i = 1;
    while (i<=10)
    {
        int result = num * i;
        printf("%d x %d = %d\n", num, i, result);
        i++;
    }
    
    printf("\n\n");

    int j = 1;
    do
    {
        int result = num * j;
        printf("%d x %d = %d\n", num, j, result);
        j++;
    } while (j<=10);
    
    return 0;
}