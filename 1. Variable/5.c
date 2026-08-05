// Temperature Conversion - 

// Store a temperature in Celsius in a variable.
// Convert it to Fahrenheit using:
// F = (C × 9 / 5) + 32

#include <stdio.h>

int main(){
    float temp;
    printf("What is the temperature in Celsius - ");
    scanf("%f", &temp);

    float new_temp = (temp * 1.8) + 32;
    printf("Temperature in Fahrenheit = %.1f", new_temp);
    return 0;
}