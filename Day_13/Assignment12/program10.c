// Write a C program to check Symmetric Matrix.

#include <stdio.h>

int main()
{
    int row, col;
    int symmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if (row != col)
    {
        printf("Symmetric matrix is possible only for a square matrix.\n");
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

    // Check symmetric matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
    {
        printf("The matrix is Symmetric.\n");
    }
    else
    {
        printf("The matrix is not Symmetric.\n");
    }

    return 0;
}