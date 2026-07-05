// Write a C program to print all unique elements in the array.

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

    printf("Unique elements are:\n");

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}