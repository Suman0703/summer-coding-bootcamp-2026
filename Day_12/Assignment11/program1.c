// Write a C program to left rotate an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter total no. of elements in array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Store first element
    int first = array[0];

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    // Place first element at the end
    array[n - 1] = first;

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}