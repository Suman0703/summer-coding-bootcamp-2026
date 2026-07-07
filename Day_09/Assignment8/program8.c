// Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, prime, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            sum += i;
    }

    printf("Sum of prime numbers = %d", sum);

    return 0;
}