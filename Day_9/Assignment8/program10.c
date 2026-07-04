// Write a C program to check whether a number is an Armstrong number or not.

#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);

    return 0;
}