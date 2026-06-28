//WAP to print your name, age and city and pin code on screen(Using Class)
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;
    string city;
    int pincode;

    public:
    void get_data(string n, int a, string c, int p)
    {
        name = n;
        age = a;
        city = c;
        pincode = p;
    }

    void show_Data(){
        cout << name << " " << age << " "<< city << " "<< pincode << endl;
    }
};

int main()
{
    Student s1;
    s1.get_data("Suman", 19, "Hoshiarpur", 146102);
    s1.show_Data();

    return 0;
}