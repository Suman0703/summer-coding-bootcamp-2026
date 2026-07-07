// print all alphabet A-Z

#include <stdio.h>

int main(){

    for(int i = 0; i < 26; i++){
        char val = 65;
        printf("%c ", val + i);
    }
}