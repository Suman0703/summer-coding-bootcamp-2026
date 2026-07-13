#include <stdio.h>
#define SIZE 5

int arr[SIZE];

int top = -1;

int isEmpty(){
    if (top == -1){
        return 1;
    }
    return 0;
}

int isFull(){
    if (top == SIZE-1){
        return 1;
    }
    return 0;
}

int main(){
    
}