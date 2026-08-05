// 9. Electricity Bill - 
// Input the number of units consumed.

// Calculate the bill using:
// 0–100 units      → ₹5 per unit
// 101–200 units    → ₹7 per unit
// Above 200 units  → ₹10 per unit

// Example:

// Units = 80
// Bill = ₹400

// Units = 150
// Bill = ₹1050

#include <stdio.h>

int main(){
    int unit, bill;
    printf("Enter your electricity unit: ");
    scanf("%d", &unit);

    if (unit > 200)
    {
        bill = unit * 10;
        printf("Units = %d\n", unit);
        printf("Bill = $%d\n", bill);
    }
    else if (unit <= 200 && unit >= 101)
    {
        bill = unit * 7;
        printf("Units = %d\n", unit);
        printf("Bill = $%d\n", bill);
    }
    
    else{
        bill = unit * 5;
        printf("Units = %d\n", unit);
        printf("Bill = $%d\n", bill);
    }
    
    return 0;
}