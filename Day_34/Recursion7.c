#include <stdio.h>

int ADD(int n) {
    if (n == 1 || n == 2)
        return 1;

    return ADD(n - 1) + ADD(n - 2);
}

int main() {
    int j = ADD(7);
    printf("%d", j);

    return 0;
}