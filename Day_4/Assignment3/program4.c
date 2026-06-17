// Write a C program to enter a four digit number and print all digit.

#include <stdio.h>

int main() {

    int num;
    printf("Enter the Number:");
    scanf("%d", &num);

    while(num > 0) {
        printf("%d\n", num / 1000);
        num %= 1000;

        printf("%d\n", num / 100);
        num %= 100;

        printf("%d\n", num / 10);
        num %= 10;

        printf("%d\n", num);
        break;
    }

    return 0;
}