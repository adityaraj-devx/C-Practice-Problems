// 6. Grade Calculator

// Take marks (0–100).

// Print:

// 90–100 → A
// 80–89  → B
// 70–79  → C
// 60–69  → D
// Below 60 → F

#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {
        printf("A");
    }
    else if(marks <= 89 && marks >= 80)
    {
        printf("B");
    }
    else if(marks <= 79 && marks >= 70)
    {
        printf("C");
    }
    else if(marks <= 69 && marks >= 60)
    {
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}