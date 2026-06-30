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

    void copy(A &obj)
    {
        this->a = obj.a;
        this->b = obj.b;
    }
};

int main()
{
    A obj1(34, 56);
    A obj2(67, 90);

    obj1.show();
    obj2.copy(obj1);
    obj2.show();

    return 0;
}
