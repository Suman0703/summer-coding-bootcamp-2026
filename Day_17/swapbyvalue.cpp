#include <iostream>
using namespace std;

void fun(int temp){
    temp = 100;
}

int main(){

    int a = 200;

    int temp = a;
    cout << temp << " " << a << endl;

    fun(a);
    cout << temp << " " << a << endl;
}

// call by value