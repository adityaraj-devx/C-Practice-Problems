// 6. Sum of First N Numbers

// Take N from the user.

// Example:

// Input: 5

// Output:
// 1 + 2 + 3 + 4 + 5 = 15

#include <stdio.h>

int main(){
    int n;
    int j = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        j+=i;
        if (i == n)
        {
            printf("%d = %d", i, j);
        }
        else{
            printf("%d + ", i);
        }
    }
    
    return 0;
}