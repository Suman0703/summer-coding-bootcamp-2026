#include <iostream>
using namespace std;

class A {
    int marks = 10;
    friend void showMarks(A &obj);
};
void showMarks (A &obj){
    cout << obj.marks;
}
int main()
{
 A obj1;
 showMarks(obj1);

 return 0; 
    
}