#include <stdio.h>

void hello(int y){

    static int x = 10;

    printf("%d\n",++x+y);
}

int main(){
    hello(10);
    hello(10);
    hello(10);

    return 0;
}