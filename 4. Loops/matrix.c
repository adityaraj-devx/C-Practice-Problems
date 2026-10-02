#include <stdio.h>

int main(){
    int sum = 0;
    int a[2][2], b[2][2], result[2][2], result2[2][2];

    printf("\n======Enter values for Matrix A======\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter your number on A[%d][%d] position: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("\n======Enter values for Matrix B======\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter your number on B[%d][%d] position: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];            
        }
        
    }

    printf("\n====== Matrix Addition Result ======\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result2[i][j] = 0;

            for (int k = 0; k < 2; k++)
            {
                result2[i][j] += a[i][k] * b[k][j];            
            }            
        }
        
    }

    printf("\n====== Matrix Multiplication Result ======\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result2[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}