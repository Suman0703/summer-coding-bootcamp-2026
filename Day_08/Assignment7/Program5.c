// \ Write a C program to find LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclidean Algorithm
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    // lcm = first number * second number / HCF
    lcm = (a * b) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}