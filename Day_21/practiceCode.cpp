#include <iostream>
#include <string>
using namespace std;

class Password
{
    string text;

public:
    Password(string text)
    {
        this -> text = text;
    }

    void operator==(Password &obj)
    {
        if (text == obj.text)
        {
            cout << "Login Successful" << endl;
        }
        else
        {
            cout << "Login Failed. Invalid Password" << endl;
        }
    }
}; 

int main()
{
    string Current;
    cout << "Enter your password: ";
    cin >> Current;

    string Saved = "4234";

    Password obj1(Current);
    Password obj2(Saved);

    obj1 == obj2;

    return 0;
}