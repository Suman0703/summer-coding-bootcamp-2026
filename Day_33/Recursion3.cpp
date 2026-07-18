#include <iostream>
using namespace std;

void fun()
{
    static int num = 3;

    cout << "Hello from fun" << endl;

    num--;

    if (num > 0)
    {
        fun();
    }
}

int main()
{
    fun();

    return 0;
}