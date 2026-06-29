#include <iostream>
using namespace std;

int main(){
    // reference variable

    int a = 100;
    int b = 200;

    int &temp = a;
    cout << temp << " " << a << endl;

    temp = b; //a = b
    // &temp = b; // error
    cout << temp << " " << a << endl;
}