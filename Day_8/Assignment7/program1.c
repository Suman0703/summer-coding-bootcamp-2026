// Write a C program to enter a number and print its reverse.

#include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}