// Write a C program to insert an element in an array.

#include <stdio.h>

int main()
{
    int n, element, position;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n + 1];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= position; i--)
    {
        array[i] = array[i - 1];
    }

    // Insert the new element
    array[position - 1] = element;

    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}