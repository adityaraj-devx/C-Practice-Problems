// Area and Perimeter of a Rectangle - 

// Store the length and width in variables.
// Calculate and print:
// Area
// Perimeter

#include <stdio.h>

int main(){
    int length, width;

    printf("length = ");
    scanf("%d", &length);
    printf("Width = ");
    scanf("%d", &width);

    int area = length * width;
    int perimeter = 2 * (length + width);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    return 0;
}