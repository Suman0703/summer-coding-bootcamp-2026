#include <iostream>
using namespace std;

class A
{
public:
    void fun_A()
    {
        cout << "Fun from class A" << endl;
    }
};

class B : public A
{
public:
    void fun_B()
    {
        cout << "Fun from class B" << endl;
    }
};

class C : public A
{
public:
    void fun_C()
    {
        cout << "Fun from class C" << endl;
    }
};


// implementation
class D : public A
{
public:
    D()
    {
        cout << "D class Constructor" << endl;
    }
};
int main()
{
    B obj1;
    obj1.fun_A();

    C obj2;
    obj2.fun_A();

    D obj3;
    obj3.fun_A();
    
    return 0;
}
