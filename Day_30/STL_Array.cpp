#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array <int, 5> arr = {10, 20, 30, 40, 50};

    cout << "Original Array: ";

    for (auto x : arr)
        cout << x << " ";

    cout << "\nAccessing Elements\n";
    cout << "At Front: " << arr.front() << endl;
    cout << "At Back: " << arr.back() << endl;
    cout << "At (2): " << arr.at(2) << endl;
    cout << "Index 3: " << arr[3] << endl;

    cout << "Size: " << arr.size() << endl;
    cout << "Max Size : " << arr.max_size() << endl;
    cout << "Is Empty : " << arr.empty() << endl;

    arr.fill(100);

    cout << "After Fill: ";
    for (auto x : arr)
        cout << x << " ";

    array <int, 5> arr2 = {60, 70, 30, 90, 65};

    arr.swap(arr2);

    cout << "\nAfter Swap: ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;

    cout << "Elements in arr2: ";
    for (auto x : arr2)
        cout << x << " ";
    cout << endl;

    sort(arr.begin(), arr.end()); // algorithm

    cout << "After Sorting: ";
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << endl;

    reverse(arr.begin(), arr.end());

    cout << "After Reversing: ";
    // for (auto it = arr.begin(); it != arr.end(); it++)
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}