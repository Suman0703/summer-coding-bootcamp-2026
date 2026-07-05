// Write a C program to print all negative elements in an array.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no. of elements in an array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Negative elements are: ");
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}