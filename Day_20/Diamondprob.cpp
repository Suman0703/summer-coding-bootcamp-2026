// It occurs in multiple Inheritence
#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Fun from class A" << endl;
    }
};

// implementation

class B : public A
{
public:
    void fun()
    {
        cout << "Fun from class B" << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "D class Constructor" << endl;
    }
};

class D :  public B, public C
{
public:
    D()
    {
        cout << "D class Constructor" << endl;
    }
};
int main()
{
    C obj;
    // obj.fun();
    return 0;
}
