// 7. Factorial

// Take a number from the user and calculate its factorial.

// Example:

// 5! = 120

#include <stdio.h>

int main(){
    int n;
    int j = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        j*=i;
        if (i == n)
        {
            printf("%d! = %d", n, j);
        }
    }
    
    return 0;
}