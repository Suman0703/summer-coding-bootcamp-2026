// Write a C program to check whether triangle is equilateral, scalene or isosceles.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter three sides: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3)
        printf("Equilateral Triangle");

    else if(side1 == side2 || side2 == side3 || side1 == side3)
        printf("Isosceles Triangle");

    else
        printf("Scalene Triangle");

    return 0;
}