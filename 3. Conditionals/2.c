// 2. Voting Eligibility - 
// Take the user's age as input.

// Print:
// "Eligible to vote" if age is 18 or above.
// "Not eligible to vote" otherwise.

#include <stdio.h>

int main(){
    int num;
    printf("Enter your age: ");
    scanf("%d", &num);

    if (num >= 18)
    {
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }
    
    return 0;
}