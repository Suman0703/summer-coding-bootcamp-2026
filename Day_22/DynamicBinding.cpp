#include <iostream>
using namespace std;

class Pyment
{
public:
    virtual void pay() // to stop static binding (for dynamic binding..)
    {
        cout << "payment processing.." << endl;
    }
};

class Upi : public Pyment
{
public:
    void pay()
    {
        cout << "UPI payment processing.." << endl;
    }
};

class Creditcard : public Pyment
{
public:
    void pay()
    {
        cout << "Credit card payment processing.." << endl;
    }
};

class Netbanking : public Pyment
{
public:
    void pay()
    {
        cout << "Net Banking payment processing.." << endl;
    }
};

int main()
{
    // Pyment *ptr = new Upi();
    // ptr -> pay();

    Pyment *ptr = nullptr;

    int ch;
    cout << "1. UPI" << endl;
    cout << "2. Credit Card" << endl;
    cout << "3. Netbanking" << endl;
    cout << "Choose any method for payment from 1,2 and 3:";
    cin >> ch;

    switch (ch)
    {
    case 1:
        ptr = new Upi();
        break;
    case 2:
        ptr = new Creditcard();
        break;
    case 3:
        ptr = new Netbanking();
        break;
    default:
        cout << "Try Again....." << endl;
        break;
    }

    ptr -> pay();
    return 0;
}