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

class B
{
    int a;
    A obj; // B having A obj -> has-a-relation

public:
    void display()
    {
        cout << "Msg:";
        obj.msg();
    }
};
int main()
{
    B obj1;
    obj1.display();
    return 0;
}
