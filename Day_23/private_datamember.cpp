#include <iostream>
using namespace std;

class A {
    int marks = 10;
};
void showMarks (A &obj){
    // cout << obj.marks; //error
}
int main()
{
 A obj1;
 showMarks(obj1);

 return 0; 
    
}