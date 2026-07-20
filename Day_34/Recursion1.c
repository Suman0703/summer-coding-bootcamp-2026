#include <stdio.h>

void fun() {
    printf("fun - line 1\n");
    printf("fun - line 2\n");
    return;
    printf("fun - line 3\n");
    printf("fun - line 4\n");
}

int main() {
    printf("main - line 1\n");
    fun();
    printf("main - line 2\n");
    fun();
    printf("main - line 3\n");
    printf("main - line 4\n");

    return 0;
}