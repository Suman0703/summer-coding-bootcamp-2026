#include <iostream>
using namespace std;

class A
{
    int marks = 100;
    friend class B;
};
class B
{
public:
    void showMarks(A &obj)
    {
        cout << obj.marks;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj2.showMarks(obj1);

    return 0;
}