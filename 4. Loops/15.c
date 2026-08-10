// 15 -Take a number and check whether it is a Perfect Number.

// A perfect number is equal to the sum of its proper factors (factors excluding the number itself).

// Example
// Input: 6

// 1 + 2 + 3 = 6

// Output:
// Perfect Number

#include <stdio.h>

int main(){
    int num, sum_of_nums = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum_of_nums += i;
        }
        
    }
    if (sum_of_nums == num)
    {
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
    
    return 0;
}