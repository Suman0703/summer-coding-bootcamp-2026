// Write a C program to check Sparse Matrix.

#include <stdio.h>

int main()
{
    int row, col;
    int zeroCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count number of zero elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    if (zeroCount > (row * col) / 2)
    {
        printf("The matrix is a Sparse Matrix.\n");
    }
    else
    {
        printf("The matrix is not a Sparse Matrix.\n");
    }

    return 0;
}