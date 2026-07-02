#include <iostream>
using namespace std;

class loan{
    public:
    virtual void verifyDoc() = 0; //pure virtual function
};
class homeloan: public loan{
    public:
    void verifyDoc(){
        cout<<"Document verified !!";
    };
};

int main(){
    // homeloan obj;
    // obj.verifyDoc();
    // loan obj; //abstract class ka object ni bnaya jaa skta
    // obj.verifyDoc();
    return 0;
}