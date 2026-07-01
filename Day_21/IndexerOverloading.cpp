#include <iostream>
using namespace std;

class Days
{
    string arr[7] = {"Mon", "Tues", "Wed", "Thurs", "Fri", "Sat", "Sun"};

public:
    string operator[](int index)
    {
        if (index >= 0 && index < 7)
        {
            return arr[index];
        }
        else
        {
            cout << "Invalid Index.." << endl;
        }
    }
};

int main()
{
    Days d1;
    cout << d1[1];
    return 0;
}