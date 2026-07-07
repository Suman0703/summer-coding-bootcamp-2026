/* Write a C program to check whether a number is positive, negative, or zero using conditional
operator.*/

#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("Positive Number")
              : (num < 0) ? printf("Negative Number")
                          : printf("Zero");

    return 0;
}