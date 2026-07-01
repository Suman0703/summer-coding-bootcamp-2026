#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A class Constructor" << endl;
    }
    void fun_A()
    {
        cout << "Fun from class A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B class Constructor" << endl;
    }
    void fun_B()
    {
        cout << "Fun from class A" << endl;
    }
};
// implementation
class C : public A, public B
{
public:
    C()
    {
        cout << "B class Constructor" << endl;
    }
};
int main()
{
    C obj;
    obj.fun_A();
    obj.fun_B();
    
    return 0;
}
