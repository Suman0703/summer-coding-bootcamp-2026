// Write a C program to delete all duplicate elements from an array.

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

    // Remove duplicate elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    array[k] = array[k + 1];
                }

                n--;
                j--; 
            }
        }
    }

    printf("Array after deleting duplicate elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}