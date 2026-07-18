#include <iostream>
using namespace std;

void fun(int num)
{
    cout << "Hello from fun" << endl;

    if (num > 0)
    {
        fun(num - 1);
    }
}

int main()
{
    fun(3);

    return 0;
}