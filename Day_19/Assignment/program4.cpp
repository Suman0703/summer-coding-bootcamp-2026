// C++ Program To calculate area of Box using parameterized Constructor.

#include <iostream>
using namespace std;

class Box
{
    int length, breadth, height;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void area()
    {
        int surfaceArea = 2 * (length * breadth + breadth * height + length * height);
        cout << "Surface Area of Box = " << surfaceArea << endl;
    }
};

int main()
{
    int l, b, h;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    Box obj(l, b, h);

    obj.area();

    return 0;
}