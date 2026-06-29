// constructor is a special method / function that has no return type.

// the name of constructor will be same as class name.

// we don't have any need to call the constructor function, it gets called automatically when an object is created.

#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "This is a constructor" << endl;
    }
};

int main(){
    A obj;

    A object[5]; // array of objects. 5 objects
    return 0;
}