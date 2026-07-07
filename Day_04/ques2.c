// #include <stdio.h>

// int main(){

//     int a , b , c;

//     printf("Enter Value of Three Numbers:");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c){
//         printf ("a is the maximum number: %d\n", a);
//     }
//     else if(b > a && b > c)
//     {
//         printf ("b is the maximum number: %d\n", b);
//     }
//     else {
//         printf ("c is the maximum number: %d\n", c);
//     }
// }

#include <stdio.h>

int main(){

    int a , b , c;

    printf("Enter Value of Three Numbers:");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;

    if ( b > max)
        max = b;
    if ( c > max)
        max = c;
    
    printf("Max: %d", max);

}

