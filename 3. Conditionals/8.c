// 8. Profit or Loss - 
// Take:
// Cost Price
// Selling Price

// Print:
// Profit or Loss or No Profit No Loss

// Also print the amount.
// Example:
// CP = 100
// SP = 120
// Profit = 20

#include <stdio.h>

int main(){
    float cp, sp;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);


    if (sp > cp)
    {
        float profit = sp - cp;
        printf("CP = $%.2f\n", cp);
        printf("SP = $%.2f\n", sp);
        printf("Profit = $%.2f\n", profit);
    }
    else if (cp > sp)
    {
        float loss = cp - sp;
        printf("CP = $%.2f\n", cp);
        printf("SP = $%.2f\n", sp);
        printf("Loss = $%.2f\n", loss); 
    }
    
    else{
        printf("No Profit No Loss");
    }
    return 0;
}