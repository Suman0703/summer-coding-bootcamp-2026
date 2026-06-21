// Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i += 2;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}