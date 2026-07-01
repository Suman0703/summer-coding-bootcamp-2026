#include <iostream>
using namespace std;

class A
{
public:
    int a = 10; // can be accessed anywhere

protected: // can be accessible in child class
    int b = 20;

private:
    int c = 30; // can not be accessed outside the class
};

class B : public A
{
public:
    void fun()
    {
        cout << a << " " << b << endl;
    }
}; 

// class B : protected A    //public memeber becomes protected 
// {
// public:
//     void fun()
//     {
//         cout << a << " " << b << endl;
//     }
// };

// class B : private A    //public and protected memeber becomes protected 
// {
// public:
//     void fun()
//     {
//         cout << a << " " << b << endl;
//     }
// };

int main()
{
    B obj;
    obj.fun();

    return 0;
}
