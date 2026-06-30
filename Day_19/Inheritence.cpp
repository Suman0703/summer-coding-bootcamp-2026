#include <iostream>
using namespace std;

class A
{
public:
    void msg()
    {
        cout << "Koi Diwana Kehta hai !!" << endl;
    }
};

class B : public A
{
    int a;

public:
    void display()
    {
        cout << "Msg:";
        // msg();
    }
};
int main()
{
    B obj1;
    obj1.display();
    obj1.msg();
    return 0;
}
