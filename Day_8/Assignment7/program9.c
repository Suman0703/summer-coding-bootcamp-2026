// Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {
    int num, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}