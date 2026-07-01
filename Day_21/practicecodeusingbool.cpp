/* This C++ program demonstrates operator overloading by overloading the == operator to compare two password objects. It accepts a masked password from the user and displays "Login Successful" if it matches the saved password; otherwise, it displays "Invalid Password".*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Password
{
    string pass;

public:
    Password(string pass)
    {
        this->pass = pass;
    }

    bool operator==(Password &temp)
    {
        if (this->pass == temp.pass)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Password saved("123");
    string pass = "";

    cout << "Enter Your Password: ";

    for (int i = 0; i < 3; i++) 
    {
        char ch = getch();
        pass += ch;
        cout << "*";
    }

    cout << endl;

    Password current(pass);

    if (saved == current)
    {
        cout << "Login Successful";
    }
    else
    {
        cout << "Invalid Password";
    }

    return 0;
}