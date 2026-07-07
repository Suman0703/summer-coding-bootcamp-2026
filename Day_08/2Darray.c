#include <stdio.h>

int main()
{

    int arr[2][3] = {{1, 2, 3}, {5, 7, 8}, {9, 0, 7}};
    // int arr [2][3] = {1,2,3,5,7,8,9,0,7};
    // int array [2][3] = {[1][0] = 1, [1][1]=3, [1][2]=7};

    printf("%p\n", arr); //100
    printf("%p\n", &arr); //100
    printf("%p\n", arr + 1); // 112

    printf("%p\n", arr[0] + 1); //104
    printf("%p\n", *(arr[0] + 1)); //104

}