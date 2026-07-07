// Write a C program to find HCF (GCD) of two numbers.

// #include <stdio.h>

// int main() {
//     int num1, num2, i, hcf;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     for (i = 1; i <= num1 && i <= num2; i++) {
//         if (num1 % i == 0 && num2 % i == 0) {
//             hcf = i;
//         }
//     }

//     printf("HCF = %d", hcf);

//     return 0;
// }

// Euclidean Algorithm.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d", a); 

    return 0;
}