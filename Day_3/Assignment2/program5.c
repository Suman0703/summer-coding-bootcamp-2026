/*5. Write a C program that accepts two item’s weight (floating points' values ) and number of
purchase (floating points' values) and calculate the average value of the items.*/

#include <stdio.h>

int main()
{
    float weight1, weight2;
    float quantity1, quantity2;
    float average;

    printf("Weight - Item1: ");
    scanf("%f", &weight1);

    printf("No. of Item1: ");
    scanf("%f", &quantity1);

    printf("Weight - Item2: ");
    scanf("%f", &weight2);

    printf("No. of Item2: ");
    scanf("%f", &quantity2);

    average = ((weight1 * quantity1) + (weight2 * quantity2))
              / (quantity1 + quantity2);

    printf("Average Value = %f\n", average);

    return 0;
}