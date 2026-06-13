#include <stdio.h>

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Roman Numeral: ");

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", roman[i]);
            num -= values[i];
        }
    }

    printf("\n");

    return 0;
}