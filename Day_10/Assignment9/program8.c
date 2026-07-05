//  Write a C program to copy all elements from an array to another array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array1[n], array2[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Copy elements from array1 to array2
    for (int i = 0; i < n; i++)
    {
        array2[i] = array1[i];
    }

    printf("Elements of copied array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}