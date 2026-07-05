// Write a C program to find determinant of a 2x2 matrix.

#include <stdio.h>

int main()
{
    int matrix[2][2];
    int determinant;

    printf("Enter elements of 2x2 matrix:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    determinant = (matrix[0][0] * matrix[1][1]) -
                  (matrix[0][1] * matrix[1][0]);

    printf("Determinant = %d\n", determinant);

    return 0;
}