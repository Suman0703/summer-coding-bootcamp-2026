//It occurs in multiple inheritence 
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

class B : virtual public A
{

};

class C : virtual public A
{

};


// implementation
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
    D obj;
    obj.fun();
    return 0;
}
