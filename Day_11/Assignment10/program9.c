// Write a C program to sort array elements in ascending or descending order.

#include <stdio.h>

int main()
{
    int n, choice, temp;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((choice == 1 && array[j] > array[j + 1]) ||
                (choice == 2 && array[j] < array[j + 1]))
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    if (choice == 1)
    {
        printf("Array in ascending order:\n");
    }
    else if (choice == 2)
    {
        printf("Array in descending order:\n");
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}