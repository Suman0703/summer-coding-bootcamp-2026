#include <stdio.h>
#include <string.h>

int main()
{

    char str[20] = "Hello World";
    int len = strlen(str);

    printf("%d\n", len);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    };

    return 0;
}