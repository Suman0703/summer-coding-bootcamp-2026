// Write a C program to sort even and odd elements of an array separately.

#include <stdio.h>

int main()
{
    int n, temp;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
        {
            even[evenCount++] = array[i];
        }
        else
        {
            odd[oddCount++] = array[i];
        }
    }

    // Sort even array in ascending order
    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = 0; j < evenCount - i - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    // Sort odd array in ascending order
    for (int i = 0; i < oddCount - 1; i++)
    {
        for (int j = 0; j < oddCount - i - 1; j++)
        {
            if (odd[j] > odd[j + 1])
            {
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    printf("Even elements in sorted order:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements in sorted order:\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}