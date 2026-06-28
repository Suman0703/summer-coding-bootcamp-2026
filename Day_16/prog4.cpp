#include <iostream>
#include <string>
using namespace std;

class Calculation
{
    int num1;
    int num2;

public:
    void getData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void addition()
    {
        int sum = num1 + num2;
        cout << sum << endl;
    }

    void subtraction()
    {
        int sub = num1 - num2;
        cout << sub << endl;
    }

    void multiplication()
    {
        int mul = num1 * num2;
        cout << mul << endl;
    }

    void division()
    {
        if (num2 != 0)
        {
            int div = num1 / num2;
            cout << div << endl;
        }
        else
        {
            cout << "Division is not possible";
        }
    }
};

int main()
{
    Calculation c1;

    c1.getData(5, 2);
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();
}