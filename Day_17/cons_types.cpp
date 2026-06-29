#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "This is a non-parameterized constructor" << endl;
    }

    A(int a){
        cout << "This is a parameterized constructor" << endl;
    }
};

class B{
    public:
    B(){
        cout << "This is a non-parameterized constructor" << endl;
    }

    B(int a){
        cout << "This is a parameterized constructor" << endl;
    }

    B(int a, int b){
        cout << "This is a dual parameterized constructor" << endl;
    }
};

int main(){
    A obj1; // runs non parameterized constructor

    A obj2(5);  // runs parameterized constructor

    A obj3(5, 7); // no matching function for call to 'A::A(int, int)'

    B obj3(5, 7); // runs dual parameterized constructor
    return 0;
}