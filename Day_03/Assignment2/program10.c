/*Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
How to calculate simple interest in C programming.*/

#include <stdio.h>

int main()
{
    float principal, rate, time, simpleInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Time (years): ");
    scanf("%f", &time);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    simpleInterest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}