// Write a C program to find second largest element in an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest element does not exist.\n");
        return 0;
    }

    int array[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int largest, secondLargest;

    if (array[0] > array[1])
    {
        largest = array[0];
        secondLargest = array[1];
    }
    else
    {
        largest = array[1];
        secondLargest = array[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    return 0;
}