// Write a C program to calculate electricity bill.

#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter electricity units: ");
    scanf("%f", &units);

    if(units <= 50)
        bill = units * 0.50;

    else if(units <= 150)
        bill = 25 + (units - 50) * 0.75;

    else if(units <= 250)
        bill = 100 + (units - 150) * 1.20;

    else
        bill = 220 + (units - 250) * 1.50;

    bill = bill + (bill * 0.20);

    printf("Electricity Bill = %.2f", bill);

    return 0;
}