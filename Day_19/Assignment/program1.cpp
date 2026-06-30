/*Write a program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using
Parameterized constructor.*/

#include <iostream>
using namespace std;

class Area
{
    int length, breadth;

public:
    Area(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void displayArea()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main()
{
    int length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    Area obj(length, breadth);

    obj.displayArea();

    return 0;
}