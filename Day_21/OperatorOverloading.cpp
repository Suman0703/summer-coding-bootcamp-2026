// Function Overloading
#include <iostream>
using namespace std;

class A
{
    int num1;

public:
    A(int a)
    {
        this->num1 = a;
    }

    A operator+(A &ob)
    {
        // A temp(this -> num1 + ob.num1);
        // return temp;

        cout << this->num1 + ob.num1 << endl;
    }
    A operator-(A &ob)
    {
        cout << this->num1 - ob.num1 << endl;
    }
    A operator*(A &ob)
    {
        cout << this->num1 * ob.num1 << endl;
    }
};

int main()
{
    A obj1(12);
    A obj2(9);
    // obj1 + obj2; // obj1.+(obj2) => A :: + (&obj1, obj2)

    obj1 + obj2;
    obj1 - obj2;
    obj1 *obj2;

    return 0;
}