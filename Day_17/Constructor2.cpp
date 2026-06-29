#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int emp_id;
    string name;
    int salary;

public:
    static string dep_name; // static variable = class data member
    Employee(int i, string n, int s)
    {
        emp_id = i;
        name = n;
        salary = s;
    }

    void show_data()
    {
        cout << emp_id << " " << name << " " << salary << " ";
    }

    static void show_dep()
    {
        cout << dep_name;
    }
};

string Employee ::dep_name = "RBPU ";
int main()
{
    Employee e1(609, "Suman", 80000);
    e1.show_data();
    Employee ::show_dep();

    return 0;
}