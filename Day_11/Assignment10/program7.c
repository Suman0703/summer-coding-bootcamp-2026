// Write a C program to put even and odd elements of an array into two separate arrays.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Separate even and odd elements
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even[evenCount] = array[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = array[i];
            oddCount++;
        }
    }

    printf("Even elements are:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements are:\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}