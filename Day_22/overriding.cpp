#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Fun-A" << endl;
    }
};

class B : public A
{
public:
    void fun()
    {
        cout << "Fun-B" << endl;
    }
};

int main()
{
    // B obj;
    // obj.fun();

    // B *ptr = new B(); //heap
    // ptr -> fun();

    A *ptr = new A(); //heap
    ptr -> fun();  //static binding

    return 0;
}