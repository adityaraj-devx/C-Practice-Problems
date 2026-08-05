// 4. Odd Numbers

// Print all odd numbers from 1 to 100.

#include <stdio.h>

int main(){
    for ( int i = 1; i <= 100; i+=2)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");
    
    int j = 1;
    while (j <= 100)
    {
        printf("%d ", j);
        j+=2;
    }
    printf("\n");
    printf("\n");

    int i = 1;
    do
    {
        printf("%d ", i);
        i+=2;
    } while (i <= 100);
    
    
    
    return 0;
}