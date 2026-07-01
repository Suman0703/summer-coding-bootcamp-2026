#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A class Constructor" << endl;
    }
};

class B : public A
{
    public:
    B()
    {
        cout << "B class Constructor" << endl;
    }
};

class C : public B
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

    return 0;
}
