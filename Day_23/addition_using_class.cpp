#include <iostream>
using namespace std;
template <class T1, class T2>

class Add
{
    T1 num;
    T2 num2;

public:
    Add(T1 a, T2 b)
    {
        num = a;
        num2 = b;
    }

    void sum()
    {
        cout << num + num2 << endl;
    }
};

int main()
{
    Add<int, float> obj(10, 6.6);
    obj.sum();

    Add<float, double> obj2(10.85, 89.89);
    obj2.sum();
    return 0;
}
