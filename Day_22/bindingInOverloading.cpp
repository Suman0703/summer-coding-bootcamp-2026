// Function Overloading
#include <iostream>
using namespace std;

class Add
{
public:
    void fun(int a, int b)
    {
        cout << "a+b: " << a + b << endl;
    }
    void fun(int a, int b, int c)
    {
        cout << "a+b+C: " << a + b + c << endl;
    }
    void fun(int a, int b, int c, int d)
    {
        cout << "a+b+c+d: " << a + b + c + d << endl;
    }
    void fun(int a, char ch)
    {
        cout << "a+ch: " << a + ch << endl;
    }
};

int main()
{
    Add *obj = new Add();
    obj -> fun(12,'A'); // static binding

    return 0;

}