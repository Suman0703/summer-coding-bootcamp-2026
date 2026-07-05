// Write a C program to find Upper Triangular Matrix.

#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if (row != col)
    {
        printf("Upper triangular matrix is possible only for a square matrix.\n");
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

    printf("Upper triangular matrix:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i <= j)
            {
                printf("%d ", matrix[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}