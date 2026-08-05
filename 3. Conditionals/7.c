// 7. Triangle Validity - 
// Take three angles.
// Determine whether they can form a valid triangle.

#include <stdio.h>

int main(){
    int angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    if ((angle1 > 0 && angle1 < 180) && 
        (angle2 > 0 && angle2 < 180) && 
        (angle3 > 0 && angle3 < 180) && 
        (angle1 + angle2 + angle3 == 180))
    {
        printf("It's a traingle.");
    }
    else
    {
        printf("It's not a triangle.");
    }
    return 0;
}