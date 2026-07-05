// Write a C program to count total number of negative elements in an array.

#include <stdio.h>

int main()
{
    int n, negativeCount = 0;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            negativeCount++;
        }
    }

    printf("Total number of negative elements = %d\n", negativeCount);

    return 0;
}