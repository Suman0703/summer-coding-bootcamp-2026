#include <stdio.h>

void reverse(int n) {
    if (n == 0)
        return;

    printf("%d ", n);
    reverse(n - 1);
}

int main() {
    reverse(5);

    return 0;
}