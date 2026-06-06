#include <stdio.h>
#include "extern2.c"

extern int z;
extern void hi(int y);

void hello(int y)
{

    static int x = 10;
    printf("%d\n", ++x + y);
};

int main()
{
    hello(10);
    hello(10);
    hello(10);
    hi(30);
    printf("%d\n", z);

    return 0;
}