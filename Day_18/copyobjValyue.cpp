#include <iostream>
using namespace std;

class A
{
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
        cout << a << " " << b << endl;
    }
    void copy(A &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    // for obj2
    // void copy(A &obj)
    // {
    //     this->a = obj.a;
    //     this->b = obj.b;
    // }
};

int main()
{
    A obj1(34, 56);
    A obj2 = obj1;
    obj2.show();
    obj2.copy(obj1); // A ::copy (obj2,obj1)

    return 0;
}