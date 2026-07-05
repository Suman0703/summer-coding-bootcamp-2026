// Write a C program to find maximum and minimum element in an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}