// Write a C program to find sum of main diagonal elements of a matrix.

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
        printf("Main diagonal exists only for a square matrix.\n");
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

    // Find sum of main diagonal elements
    for (int i = 0; i < row; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}