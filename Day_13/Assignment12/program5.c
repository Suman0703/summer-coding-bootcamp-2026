// Write a C program to find sum of lower triangular matrix.

#include <stdio.h>

int main()
{
    int row, col, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if (row != col)
    {
        printf("Lower triangular matrix is possible only for a square matrix.\n");
        return 0;
    }

    int matrix[row][col];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of lower triangular elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of lower triangular matrix = %d\n", sum);

    return 0;
}