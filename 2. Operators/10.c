// 10. Time Conversion Challenge - 

// Take a number of minutes from the user and convert it into:

// Hours
// Remaining minutes

// Example:

// Input: 135 minutes

// Output:
// Hours = 2
// Minutes = 15

#include <stdio.h>

int main(){
    int total_mins;
    printf("How many minutes: ");
    scanf("%d", &total_mins);

    int hrs = total_mins / 60;
    int mins = total_mins % 60;

    printf("Total time is %d hours %d minutes", hrs, mins);
    return 0;
}