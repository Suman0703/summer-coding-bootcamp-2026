// Write a C program to find maximum between two numbers using switch case.

#include <stdio.h>

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(a > b) {

        case 1:
            printf("Maximum = %d", a);
            break;

        case 0:
            switch(a == b) {
                case 1:
                    printf("Both numbers are equal");
                    break;

                case 0:
                    printf("Maximum = %d", b);
            }
    }

    return 0;
}