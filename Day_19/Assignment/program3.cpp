//C++ Program to calculate Volume of Cube using parameterized constructor.
#include <iostream>
using namespace std;

class Cube
{
    int side;

public:
    Cube(int s)
    {
        side = s;
    }
    void volume()
    {
        cout << "Volume of Cube = " << side * side * side << endl;
    }
};

int main()
{
    int side;

    cout << "Enter the side of the cube: ";
    cin >> side;

    Cube obj(side);

    obj.volume();

    return 0;
}