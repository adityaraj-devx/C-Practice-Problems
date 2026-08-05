// 9. Calculate Total and Discount - 
// A shopkeeper wants to calculate a customer's final bill.

// Take:
// Price of one item
// Quantity

// Calculate:
// Total = Price × Quantity
// Then apply a 10% discount and calculate the final amount.

// Print:
// Total price
// Discount amount
// Final price

#include <stdio.h>
#include <string.h>

int main(){
    char item[50]; 
    int quantity;
    float price;

    printf("What you want to buy : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What's the price of %s : ", item);
    scanf("%f", &price);

    printf("How many %s's : ", item);
    scanf("%d", &quantity);

    float total = (float) price * quantity;
    float discount = total * 0.1;
    float grand_total = total - discount;

    printf("Total price: $%.2f\nDiscount: $%.2f\nGrand total: $%.2f", total, discount, grand_total);
    return 0;
}