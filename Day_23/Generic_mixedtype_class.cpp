#include <iostream>
using namespace std;
template <class T1, class T2>

class A
{
    T1 num;
    T2 num2;

public:
    A(T1 a, T2 b)
    {
        num = a;
        num2 = b;
    }

    void show()
    {
        cout << num << " " << num2 << endl;
    }
};

int main()
{
    A<int, float> obj(10, 6.6);
    obj.show();

    A<float, double> obj2(10.85, 89.89);
    obj2.show();
    return 0;
}
