#include <iostream>
using namespace std;

template <class T>
void search(T arr[], int n, T ele)
{
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Element not found." << endl;
    }
}

int main()
{
    int choice, n;

    cout << "Choose Data Type\n";
    cout << "1. int\n";
    cout << "2. float\n";
    cout << "3. double\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number of elements: ";
    cin >> n;

    switch (choice)
    {
    case 1:
    {
        int arr[n], ele;
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter element to search: ";
        cin >> ele;

        search(arr, n, ele);
        break;
    }

    case 2:
    {
        float arr[n], ele;
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter element to search: ";
        cin >> ele;

        search(arr, n, ele);
        break;
    }

    case 3:
    {
        double arr[n], ele;
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter element to search: ";
        cin >> ele;

        search(arr, n, ele);
        break;
    }

    default:
        cout << "Invalid Choice";
    }

    return 0;
}