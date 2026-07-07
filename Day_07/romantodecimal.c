#include <stdio.h>

int value(char c){
    switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
    }
}

int main() {
    char roman[100];
    int decimal = 0;
    int i = 0;

    printf("Enter a Roman : ");
    scanf("%s", roman);

    while (roman[i] != '\0') {
        int s1 = value(roman[i]);
        if (roman[i + 1] != '\0') {
            int s2 = value(roman[i + 1]);
            if (s1 >= s2) {
                decimal += s1;
            } else {
                decimal += s2;
                decimal -= s1;
                i++;
            }
        } else {
            decimal += s1;
        }
        
        i++;
    }

    printf("Decimal: %d", decimal);

    return 0;
}