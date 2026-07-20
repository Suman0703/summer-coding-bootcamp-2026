#include <stdio.h>

void show(int n) {
    if (n > 4000)
        return;

    printf("%d ", n);
    show(2 * n);
    printf("%d ", n);
}

int main() {
    show(1000);

    return 0;
}