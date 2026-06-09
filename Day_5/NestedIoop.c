// nested if loop

#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                goto x;   
            }
        }
    }

x:
    printf("Nested Loop");

    return 0;
}