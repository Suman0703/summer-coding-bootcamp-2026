// Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}