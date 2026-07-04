// Write a C program to check whether a number is Prime number or not.

// #include <stdio.h>

// int main() {
//     int num, i, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             count++;
//         }
//     }

//     if (count == 2)
//         printf("%d is a Prime Number.", num);
//     else
//         printf("%d is not a Prime Number.", num);

//     return 0;
// }

#include <stdio.h>

int main() {
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("%d is a Prime Number.", num);
    else
        printf("%d is not a Prime Number.", num);

    return 0;
}
