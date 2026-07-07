// Q6. Write a C program to find the power of a number using for loop.

#include <stdio.h>

int main() {
    int base, exponent, i;
    long long power = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++) {
        power = power * base;
    }

    printf("%d ^ %d = %lld\n", base, exponent, power);

    return 0;
}