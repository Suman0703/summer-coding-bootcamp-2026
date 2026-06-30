#include <iostream>
using namespace std;

class A
{
public:
    int num1;
    int num2;

    void fun()
    {
        cout << "Happy Learning.." << endl;
    }
};

class B : public A
{
    int num1;
    int num2;

public:
    B(int a, int b)
    {
        num1 = a;
        num1 = b;
    }
    void show()
    {
        cout << num1 << " " << num2;
    }
};
int main()
{
    B obj1(12, 30);
    obj1.fun();
    obj1.show();
    return 0;
}
