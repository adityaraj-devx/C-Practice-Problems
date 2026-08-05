// Salary Calculator
// Store a person's basic salary in a variable.
// Calculate:
// 20% HRA
// 10% DA
// Gross salary = Basic + HRA + DA
// Print the complete salary breakdown.

#include <stdio.h>

int main(){
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);

    int hra = (salary * 20) / 100;
    int da = (salary * 10) / 100;
    int gross_salary = salary + hra + da;

    printf("Base salary = $%d\nHRA(House Rent Allowance) = $%d\nDA(Dearness Allowance) = $%d\nGross salary = $%d", salary, hra, da, gross_salary);

    return 0;
}