// Write a C program to check Identity Matrix.

#include <stdio.h>

int main()
{
    int row, col;
    int identity = 1;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if (row != col)
    {
        printf("Identity matrix is possible only for a square matrix.\n");
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

    // Check Identity Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    identity = 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    identity = 0;
                }
            }
        }
    }

    if (identity)
    {
        printf("The matrix is an Identity Matrix.\n");
    }
    else
    {
        printf("The matrix is not an Identity Matrix.\n");
    }

    return 0;
}