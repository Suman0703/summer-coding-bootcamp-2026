#include <stdio.h>

void fun2();

void fun() {
    printf("fun - line 1\n");
    fun2();
    printf("fun - line 2\n");
}

void fun2() {
    printf("fun2 - line 1\n");
    return;
    printf("fun2 - line 2\n");
}

int main() {
    printf("main - line 1\n");
    fun();
    printf("main - line 2\n");

    return 0;
}