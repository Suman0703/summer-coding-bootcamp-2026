// Write a C program to enter a number and print it in words using an array.

#include <stdio.h>

int main() {
    int num, digits[20], count = 0;

    char *words[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("%s\n", words[0]);
        return 0;
    }

    // Store digits in an array
    while (num > 0) {
        digits[count] = num % 10;
        num /= 10;
        count++;
    }

    // Print digits in correct order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[digits[i]]);
    }

    return 0;
}