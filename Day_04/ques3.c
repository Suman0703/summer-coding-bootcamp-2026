#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Convert uppercase to lowercase
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    if (ch >= 'a' && ch <= 'z')
    {
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel\n");
                break;

            default:
                printf("Consonant\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}