#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "a:" << a << " " << "b:" << b << endl;
    }

    A (A &obj)
    {
        this->a = obj.a;
        this->b = obj.b;
    }
};

int main()
{
    A obj1(34, 56);
    A obj2(obj1);

    obj1.show();
    obj2.show();

    return 0;
}
