// Write a C program to find all prime factors of a number.

#include <stdio.h>

int main() {
    int num, i, j, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors are: ");

    for (i = 2; i <= num; i++) {

        if (num % i == 0) {

            prime = 1;

            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if (prime)
                printf("%d ", i);
        }
    }

    return 0;
}