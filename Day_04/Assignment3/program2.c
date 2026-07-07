// Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        ? printf("%d is a Leap Year\n", year)
        : printf("%d is Not a Leap Year\n", year);

    return 0;
}