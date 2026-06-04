#include <stdio.h>

int main()
{
    int amount;
    int note_500, note_100, note_50, note_20;
    int note_10, note_5, note_2, note_1;

    printf("Input the amount: ");
    scanf("%d", &amount);

    note_500 = amount / 500;
    amount %= 500;

    note_100 = amount / 100;
    amount %= 100;

    note_50 = amount / 50;
    amount %= 50;

    note_20 = amount / 20;
    amount %= 20;

    note_10 = amount / 10;
    amount %= 10;

    note_5 = amount / 5;
    amount %= 5;

    note_2 = amount / 2;
    amount %= 2;

    note_1 = amount;

    printf("There are:\n");
    printf("%d Note(s) of 500.00\n", note_500);
    printf("%d Note(s) of 100.00\n", note_100);
    printf("%d Note(s) of 50.00\n", note_50);
    printf("%d Note(s) of 20.00\n", note_20);
    printf("%d Note(s) of 10.00\n", note_10);
    printf("%d Note(s) of 5.00\n", note_5);
    printf("%d Note(s) of 2.00\n", note_2);
    printf("%d Note(s) of 1.00\n", note_1);

    return 0;
}