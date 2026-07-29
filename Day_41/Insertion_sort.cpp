#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total No. of Elements in an array:";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            swap(arr[j + 1], arr[j]);
            // arr[j + 1] = arr[j];
            j--;
        }

        // arr[j + 1] = temp;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}