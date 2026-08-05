// 2. Even or Odd - 
// Take an integer from the user and determine whether it is even or odd using the % operator.

#include <stdio.h>

int main(){
    int num;
    printf("Enter the numeber: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }
    
    return 0;
}