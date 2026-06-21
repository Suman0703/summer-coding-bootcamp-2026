// Write a C program to print all natural numbers in reverse (from n to 1) using while loop.

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n >= 1) {
        printf("%d ", n);
        n--;
    }

    return 0;
}