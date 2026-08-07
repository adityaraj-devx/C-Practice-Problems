// 13. Factors of a Number

// Input:

// 36

// Output:

// 1 2 3 4 6 9 12 18 36


#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("No factors");
        return 0;
    }
    

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        
    }

    return 0;
}