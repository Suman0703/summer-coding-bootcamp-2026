/*This program never stops because num is recreated with value 3 every time the function is called. Eventually, it causes a stack overflow.*/

#include <iostream>
using namespace std;

void fun()
{
    int num = 3;

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