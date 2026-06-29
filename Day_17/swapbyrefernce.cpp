#include <iostream>
using namespace std;

// call by reference
void change(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// call by address (pointer) (powerful but less readable)
void modify(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 100;
    int b = 200;

    modify(&a, &b);
    cout << a << " " << b;

    return 0;
}