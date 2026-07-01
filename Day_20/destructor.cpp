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
    ~C()
    {
        cout << "C class Destrcutor" << endl;
    }
};
int main()
{
    C obj;
    cout << "Happy Learning ....." << endl;
    cout << "Destructor is called when program ends" << endl;
    return 0;
}
