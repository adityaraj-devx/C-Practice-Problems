// Convert Second - 

// Store a total number of seconds in a variable.
// Convert it into:
// Hours
// Minutes
// Remaining seconds

#include <stdio.h>

int main(){
    int total_sec;
    printf("How many seconds: ");
    scanf("%d", &total_sec);

    int hrs = total_sec  / 3600;
    int mins = (total_sec % 3600) / 60;
    int sec = (total_sec  % 3600) % 60;

    printf("Total time is %d hours %d minutes %d seconds", hrs, mins, sec);
    return 0;
}