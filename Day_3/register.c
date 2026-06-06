#include <stdio.h>

int main()
{

    register int x;
    int y;
    printf("Enter Value of y:");
    scanf("%d", &y);

    x = y;

    printf("%d", x);

    return 0;
}