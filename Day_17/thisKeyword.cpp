#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;

    public:
    Student(int rollNo, string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    void showData(){
        cout << name << " " << rollNo << endl;
    }
};

// void showDaata(Student *this){
//     cout << name << " " << this->rollNo << endl;
// }

int main(){
    Student s1(581, "Raman");
    Student s2(609, "Suman");

    s1.showData();
    s2.showData(); // Student::showData(s1)

    return 0;
}