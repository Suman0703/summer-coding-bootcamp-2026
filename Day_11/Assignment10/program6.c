// Write a C program to find reverse of an array.

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

    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}