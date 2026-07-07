#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    int **ptr = &p; // adress of pointer
    int *ptr = &p;  // value of pointer
}