// Write a C program to delete an element from an array at specified position.

#include <stdio.h>

int main()
{
    int n, position;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the left
    for (int i = position - 1; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}