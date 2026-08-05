// 2. Print in Reverse

// Print numbers from 100 to 1.

#include <stdio.h>

int main(){
    for ( int i = 100; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");
    
    int j = 100;
    while (j >= 1)
    {
        printf("%d ", j);
        j--;
    }
    printf("\n");
    printf("\n");

    int i = 100;
    do
    {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    
    
    
    return 0;
}