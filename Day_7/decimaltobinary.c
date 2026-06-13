// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int decimal;
    int binary[100];

    int i = 0;
    
    printf("Enter a decimal: ");
    scanf("%d", &decimal);
    
    if (decimal == 0) {
        printf("Binary: 0");
        return 0;
    }
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}