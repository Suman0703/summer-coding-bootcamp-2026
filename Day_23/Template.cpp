#include <iostream>
using namespace std;
template <class T>

void add(T a, T b)
{
    cout << a + b << endl;
}

int main()
{
    add(10, 20);
    add(10.5, 20.5);
    add('A', 'a');
    return 0;
}