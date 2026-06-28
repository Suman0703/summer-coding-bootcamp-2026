#include <iostream>
#include <string>
using namespace std;

class Area
{
    float radius;

    public:
    void getdata(float r)
    {
        radius = r;
    }

    void cal()
    {
        float area = 3.14 * radius * radius;
        cout << "Area is:" << " " << area;
    }
};

int main()
{
    Area a1;
    float r;
    cout << "Enter Value of Radius: ";
    cin >> r;
    a1.getdata(r);
    a1.cal();

    return 0;
}