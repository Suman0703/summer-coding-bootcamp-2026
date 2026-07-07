/*Write a C program to calculate a bike’s average consumption from the given total distance
(integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).*/

#include <stdio.h>

int main()
{
    int distance;
    float fuel, average;

    printf("Input total distance in km: ");
    scanf("%d", &distance);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Average consumption (km/lt) = %.3f\n", average);

    return 0;
}