// write a C program to find the frequency of Numbers in an array 

// #include <stdio.h>

// void frequency(int n, int array[]) {

//     for (int i = 0; i < n; i++) {

//         int count = 1;

//         if (array[i] == -1)
//             continue;

//         for (int j = i + 1; j < n; j++) {

//             if (array[i] == array[j]) {
//                 count++;
//                 array[j] = -1; 
//             }
//         }

//         printf("%d occurs %d times\n", array[i], count);
//     }
// }

// int main() {

//     int n;

//     printf("Enter the total number of elements: ");
//     scanf("%d", &n);

//     int array[n];
 
//     printf("Enter array elements:\n");

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }

//     frequency(n, array);

//     return 0;
// }


// Optimized Code 
#include <stdio.h>

void frequency(int n, int array[]) {

    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    int freq[max + 1];

    for (int i = 0; i <= max; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[array[i]]++;
    }

    printf("\nFrequencies:\n");
    for (int i = 0; i <= max; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
}

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    frequency(n, array);

    return 0;
}