// Write a C program to interchange diagonals of a matrix.

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
        printf("Diagonal interchange is possible only for a square matrix.\n");
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

    // Interchange major and minor diagonal elements
    for (int i = 0; i < row; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][row - 1 - i];
        matrix[i][row - 1 - i] = temp;
    }

    printf("Matrix after interchanging diagonals:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}