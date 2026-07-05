// Write a C program to merge two arrays into a third array.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    int array1[n1];

    printf("Enter the elements of first array: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    int array2[n2], array3[n1 + n2];

    printf("Enter the elements of second array: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Copy first array into third array
    for (int i = 0; i < n1; i++)
    {
        array3[i] = array1[i];
    }

    // Copy second array into third array
    for (int i = 0; i < n2; i++)
    {
        array3[n1 + i] = array2[i];
    }

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", array3[i]);
    }

    return 0;
}