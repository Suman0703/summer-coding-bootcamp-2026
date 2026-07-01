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

class B
{
public:
    void fun_B()
    {
        cout << "Fun from class B" << endl;
    }
};

class C
{
public:
    void fun_C()
    {
        cout << "Fun from class C" << endl;
    }
};


// implementation
class D : public A, public B, public C
{
public:
    D()
    {
        cout << "D class Constructor" << endl;
    }
};
int main()
{
    D obj;
    obj.fun_A();
    obj.fun_B();
    obj.fun_C();

    return 0;
}
