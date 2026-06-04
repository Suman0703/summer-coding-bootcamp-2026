//Write a C program that converts kilometers per hour to miles per hour. (1 KM = 0.621371 M)

#include <stdio.h>

int main()
{
    float kilometers, miles;

    printf("Enter kilometers per hour: ");
    scanf("%f", &kilometers);

    miles = kilometers * 0.621371;

    printf("%.6f miles per hour\n", miles);

    return 0;
}
