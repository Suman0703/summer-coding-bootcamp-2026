// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main()
{
    int num, value, reverse = 0;

    printf("Enter the Value of number: ");
    scanf("%d", &num);

    value = num;

    while (num != 0)
    {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (value == reverse)
    {
        printf("%d is a palindrome number.\n", value);
    }
    else
    {
        printf("%d is not a palindrome number.\n", value);
    }

    return 0;
}
