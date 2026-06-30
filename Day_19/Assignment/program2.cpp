/* WAP to display addition, subtraction, multiplication and division of two integers on screen. Declare Class Calculation Write Parameterized constructor for initialize num1 and num2
Write member function for each operation.*/
#include <iostream>
using namespace std;

class Calculation
{
    int num1, num2;

public:
    Calculation(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void addition()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtraction()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiplication()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void division()
    {
        if (num2 != 0)
            cout << "Division = " << (float)num1 / num2 << endl;
        else
            cout << "Division not possible (Cannot divide by zero)." << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Calculation obj(a, b);

    obj.addition();
    obj.subtraction();
    obj.multiplication();
    obj.division();

    return 0;
}