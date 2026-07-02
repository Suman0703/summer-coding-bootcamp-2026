// Write a C program to find the frequency of each digit in a given integer.

#include <stdio.h>

int main()
{
    int num, digit;
    int frequency[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
    {
        frequency[0]++;
    }

    while (num != 0)
    {
        digit = num % 10;
        frequency[digit]++;
        num = num / 10;
    }
    printf("\nFrequency of each digit:\n");
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d occurs %d time(s)\n", i, frequency[i]);
        }
    }

    return 0;
}