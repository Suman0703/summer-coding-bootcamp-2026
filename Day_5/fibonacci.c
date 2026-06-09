// print first 10 Fibonacci numbers

// #include <stdio.h>

// int main(){

//     int a = 0;
//     int b = 1;

//     printf("%d %d ", a,b);

//     for (int i = 1; i <= 8; i++){

//         int c = a + b;
//         printf(" %d", c);

//         a = b;
//         b = c;
//     }

//     return 0;
// }

// Using Goto Statement

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;
    int count = 1;

    printf("%d %d ", a, b);

start:
    if (count > 8)
        goto end;

    c = a + b;
    printf("%d ", c);

    a = b;
    b = c;
    count++;

    goto start;

end:
    return 0;
}
