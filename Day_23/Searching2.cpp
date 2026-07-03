#include <iostream>
using namespace std;

template <class T>

int search(T arr[], T b, int size){
    for (int i=0; i<size; i++){
        if (arr[i] == b){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40};

    float arrr[] = {1.2, 2.3, 4.5, 6.6, 7.4};

    cout << search<int>(arr,20,4) << endl;
    cout << search<float>(arrr,7.4,5);
    
    // cout << search(arr,20,4) << endl;
    // cout << search(arrr,7.4f,5);

    return 0;
}