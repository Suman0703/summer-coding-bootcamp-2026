// C program to calculate Compound Interest

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, amount, CI;
    int t;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Time (years): ");
    scanf("%d", &t);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    amount = p * pow((1 + r / 100), t);
    CI = amount - p;

    printf("Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}