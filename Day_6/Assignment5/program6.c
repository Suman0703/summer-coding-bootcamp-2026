// Q05. Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            printf("%d is Even", num);
            break;

        case 1:
        case -1:
            printf("%d is Odd", num);
            break;
    }

    return 0;
}