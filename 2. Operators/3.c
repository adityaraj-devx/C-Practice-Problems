// 3. Positive, Negative, or Zero - 

// Take a number from the user and use relational operators to determine whether it is:

// Positive
// Negative
// Zero

#include <stdio.h>

int main(){
    int num;
    printf("Enter the numeber: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive");
    }
    else if (num < 0){
        printf("Negitive");
    }
    else{
        printf("Zero");
    }
    return 0;
}