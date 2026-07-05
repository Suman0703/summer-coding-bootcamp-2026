// Write a C program to check whether two matrices are equal or not.

#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col];
    int equal = 1;

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Compare both matrices
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != b[i][j])
            {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
    {
        printf("Both matrices are equal.\n");
    }
    else
    {
        printf("Both matrices are not equal.\n");
    }

    return 0;
}