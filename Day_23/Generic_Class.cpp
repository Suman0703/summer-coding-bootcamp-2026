#include <iostream>
using namespace std;
template <class T>

class A
{
    T num;

public:
    A(T a)
    {
        num = a;
    }

    void show()
    {
        cout << num << endl;
    }
};

int main()
{
    A<int> obj(10);
    obj.show();

    A<float> obj2(10.85);
    obj2.show();
    return 0;
}