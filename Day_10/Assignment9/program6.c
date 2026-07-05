// Write a C program to count total number of even and odd elements in an array.

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

    int even_Count = 0, odd_Count = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_Count++;
        }
        else
        {
            odd_Count++;
        }
    }

    printf("Total number of even elements = %d\n", even_Count);
    printf("Total number of odd elements = %d\n", odd_Count);

    return 0;
}