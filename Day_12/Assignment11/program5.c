// Write a C program to perform Scalar Matrix Multiplication.

#include <stdio.h>

int main()
{
    int row, col, scalar;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter scalar value: ");
    scanf("%d", &scalar);

    // Multiply each element by the scalar
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = a[i][j] * scalar;
        }
    }

    printf("Matrix after scalar multiplication:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}