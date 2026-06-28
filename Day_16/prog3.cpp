# include <string>
# include <iostream>
using namespace std;

class Area{

    int length;
    int breadth;

    public:
    void setDim(int l, int b){
        length = l;
        breadth = b;
    }

    void getArea(){
       int  area = length * breadth;
       cout << "Area is" <<" "<< area ;
    }
};

int main(){
    int l, b;
    cout << "Enter The Value of Length: ";
    cin >> l;
    cout << "Enter The Value of Breadth: ";
    cin >> b;

    Area a1;
    a1.setDim(l,b);
    a1.getArea();

    return 0;
}