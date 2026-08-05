// Student Marks - 

// Create variables for marks in 5 subjects.
// Calculate:
// Total marks
// Average marks
// Percentage


#include <stdio.h>

int main(){
    int maths, science, hin, eng, sst;

    printf("Maths marks: ");
    scanf("%d", &maths);
    printf("Science marks: ");
    scanf("%d", &science);
    printf("English marks: ");
    scanf("%d", &eng);
    printf("Social Studies marks: ");
    scanf("%d", &sst);
    printf("Hindi marks: ");
    scanf("%d", &hin);

    int total_marks = maths + science + eng + sst + hin;
    float avg_marks = (float) total_marks / 5;
    float percentage = (float) total_marks/500 * 100;

    printf("Total marks is %d\nAverage marks is %.1f\nPercentange = %.2f", total_marks, avg_marks, percentage);

    return 0;
}