// Write a C program to search an element in an array.

#include <stdio.h>

int main()
{
    int n, element, found = 0;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found.\n");
    }

    return 0;
}