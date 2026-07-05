// Write a C program to count frequency of each element in an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n], visited[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        visited[i] = 0;
    }

    printf("\nFrequency of each element:\n");

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

        printf("%d occurs %d time(s)\n", array[i], count);
    }

    return 0;
}