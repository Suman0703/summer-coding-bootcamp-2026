//  Write a C program to find first and last digit of a number.

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num;

    printf("First Digit = %d\n", firstDigit);
    printf("Last Digit = %d\n", lastDigit);

    return 0;
}