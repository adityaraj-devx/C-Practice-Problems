// 4. Leap Year - 
// Take a year from the user.
// Determine whether it is a leap year.

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    
    return 0;
}