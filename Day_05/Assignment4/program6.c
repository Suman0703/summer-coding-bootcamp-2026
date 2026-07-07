// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c == 180)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");

    return 0;
}