// Write a C program to swap first and last digits of a number.

#include <stdio.h>

int main() {
    int num, first, last, div = 1, middle, swap;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while (num / div >= 10) {
        div *= 10;
    }

    first = num / div;
    middle = (num % div) / 10;

    swap = last * div + middle * 10 + first;

    printf("Number after swapping = %d", swap);

    return 0;
}