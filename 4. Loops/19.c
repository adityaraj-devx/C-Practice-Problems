// 19 -  Fibonacci Series

// Write a C program that prints the first N terms of the Fibonacci sequence.

// For example, if:

// N = 10

// Output:

// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>

int main(){
    int a = 0, b = 1, num, next =0;
    printf("Value of N : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;  
    }
    
    return 0;
}