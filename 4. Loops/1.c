// 1. Print Numbers -
// Print numbers from 1 to 100 using:
// for
// while
// do...while
// (Write three separate programs.)

#include <stdio.h>

int main(){
    for ( int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");
    
    int j = 1;
    while (j <= 100)
    {
        printf("%d ", j);
        j++;
    }
    printf("\n");
    printf("\n");

    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    
    
    
    return 0;
}