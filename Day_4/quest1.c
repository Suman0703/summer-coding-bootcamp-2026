// Write a C program to find Maximum number between two numbers

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter Two Numbers:");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("a is Greater than b %d\n", a);
    }
    else if (b > a)
    {
        printf("b is Greater than a %d\n", b);
    }
    else
    {
        printf("both numbers are equal ");
    }
}