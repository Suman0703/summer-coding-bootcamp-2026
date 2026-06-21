// Write a C program to print all odd numbers between 1 to 100 using while loop.

#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 100) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}