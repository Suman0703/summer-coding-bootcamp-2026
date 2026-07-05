// Write a C program to right rotate an array.

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

    // Store last element
    int last = array[n - 1];

    // Shift elements to the right
    for (int i = n - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    // Place last element at the beginning
    array[0] = last;

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}