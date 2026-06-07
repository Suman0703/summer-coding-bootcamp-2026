/*Write a C program to Swap two Numbers Without Using temporary variable.*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter Value of a: ");
    scanf("%d", &a);

    printf("Enter Value of b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);

    return 0;
}