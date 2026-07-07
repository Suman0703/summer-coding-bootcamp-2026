#include <stdio.h>

int main(){

    int a = 10;
    int b = 22;

    printf("%d\n%d\n%d", a++ + --b,a,b); //31 11 21

    return 0;
}