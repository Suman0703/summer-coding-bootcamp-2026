#include <stdio.h>

int z = 10;

void hi(int y)
{

    static int x = 10;
    printf("%d\n", ++x + y);
};