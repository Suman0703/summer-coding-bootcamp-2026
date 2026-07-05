// Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int n, duplicateCount = 0;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n], visited[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1)
        {
            duplicateCount++;
        }
    }

    printf("Total number of duplicate elements = %d\n", duplicateCount);

    return 0;
}