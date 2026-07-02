#include <iostream>
using namespace std;

class A{
    int a;
    virtual void Fun1(){

    }
};

int main(){
    A obj;
    cout << sizeof(obj);

    return 0;
}