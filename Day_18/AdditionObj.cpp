#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "a:" << a << " " << "b:" << b << endl;
    }


    // static void Add(A *obj1, A &obj2)
    // {
    //     int sumA = obj1->a + obj2.a;
    //     int sumB = obj1->b + obj2.b;

    //     cout << "Sum: " << sumA << " " << sumB << endl;
    // }



    // INTERNALLY
    void Add(A &obj2) // void Add(A *this, A &obj2)
    {
        int sumA = this->a + obj2.a;
        int sumB = this->b + obj2.b;

        cout << "Sum: " << sumA << " " << sumB << endl;
    }
};

// Outside function
// void Add(A obj1, A &obj2)
// {
//     int sumA = obj1.a + obj2.a;
//     int sumB = obj1.b + obj2.b;

//     cout << "Sum: " << sumA << " " << sumB << endl;
// }


// using pointer
// void Add(A *obj1, A &obj2)
// {
//     int sumA = obj1->a + obj2.a;
//     int sumB = obj1->b + obj2.b;

//     cout << "Sum: " << sumA << " " << sumB << endl;
// }

int main()
{
    A obj1(34, 56);
    A obj2(67, 90);

    obj1.show();
    obj2.show();

    // Add(obj1, obj2);
    // Add(&obj1, obj2);
    // A::Add(&obj1, obj2);
    obj1.Add(obj2);

    return 0;
}
