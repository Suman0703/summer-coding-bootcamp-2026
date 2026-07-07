#include <stdio.h>

int HCF(int *a, int *b) // 25 35
{

    while (*b % *a != 0)
    {
        int r = *b % *a; // 10 5 0
        *b = *a;         // 25 10 5
        *a = r;          // 10 5 0
    }

    return *b;
}
int main()
{

    int a, b;
    printf("Enter the value of Two integer Numbers:");
    scanf("%d %d", &a, &b);

    // while( r != 0){
    //     r = b % a;
    //     b = a;
    //     a = r;
    // }
    // printf("HCF is: %d", b);

    printf("HCF is: %d", HCF(&a, &b));
    printf(" %d %d", a, b);
}