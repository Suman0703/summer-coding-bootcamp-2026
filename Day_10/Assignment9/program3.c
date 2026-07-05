// Write a C program to find sum of all array elements.

#include <stdio.h>

int main()
{
    int n, sum = 0;

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
        sum += array[i];
    }

    printf("Sum of all array elements = %d\n", sum);

    return 0;
}