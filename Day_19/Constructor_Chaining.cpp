#include <iostream>
using namespace std;

class A
{
    int num1;
public:
    A()
    {
        cout << "A class Constructor" << endl;
    }
    A (int a){
        cout << "A class Constructor (int)" << endl;
        num1 = a;
    }
    void show(){
        cout << "num1: "<< num1 << endl;
    }
};

class B : public A
{
    int num1;
    int num2;

public:
    B(int a, int b) : A(b)
    {
        cout << "B class Constructor (int,int)" << endl;
    }
    B()
    {
        cout << "B class Constructor" << endl;
    }
};
int main()
{
    // B obj1;
    B obj1(9,8);
    obj1.show();

    return 0;
}
