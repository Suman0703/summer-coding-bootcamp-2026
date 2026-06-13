// // Write a C program to print first 20 prime numbers
#include <stdio.h>

int main() {
    int count = 0, num = 2, prime;

    while (count < 20) {
        prime = 1;

        for (int i = 2; i <=  num/2; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     int n = 2;
//     int count = 0;

//     while (count < 20)
//     {
//         bool isprime = true;

//         for (int i = 2; i <= n - 1; i++)
//         {
//             if (n % i == 0)
//             {
//                 isprime = false;
//                 break;
//             }
//         }

//         if (isprime)
//         {
//             printf("%d ", n);
//             count++;
//         }

//         n++;
//     }

//     return 0;
// }
