#include <iostream>
using namespace std;
template <class T>

class vector
{
    T *ptr;
    int size;

public:
    vector(T *arr, int s)
    // vector(T arr[], int s)
    {
        ptr = new T[size = s];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }
    vector(int s)
    {
        ptr = new T[size = s];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = 0;
        }
    }
    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
    T& operator[](int index)
    {
        return ptr[index];
    }
};

int main()
{
    int arr[] = {30, 90, 40, 80, 90};
    vector<int> v1(10);
    v1.show();

    vector<int> v2(arr, 5);
    v2.show();

    cout << v2[3];

    return 0;

}