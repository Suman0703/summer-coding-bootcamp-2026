#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;

    public:
    void setData(int r, string n){
        rollNo = r;
        name = n;
    }

    void showData(){
        cout << name << " " << rollNo;
    }
};


int main(){
    Student s1;

    s1.showData();

    return 0;
}