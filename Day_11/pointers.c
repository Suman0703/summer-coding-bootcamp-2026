# include <stdio.h>

int sum(int a, int b){
    return a+b;
}


int main(){

    int*p; // not assigned address - wild pointer
    printf("%d\n", *p);

    p = NULL;

    int x = 20;
    int y = 30;

    int *const ptr = &x; // constant pointer
    // ptr = &y; // not possible
    printf("%d\n", *ptr);

    // pointer to constant 

    const int* p1;

    p1 = &x;
    p1 = &y;


    // *p1 = 20; // cannot change value
    return 0;

    int (*fp)(int, int);
    fp = &sum;

    printf("%d", fp(3,5));

    return 0;
}