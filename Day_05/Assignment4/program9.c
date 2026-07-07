// Write a C program to input marks of five subjects and calculate percentage and grade.

#include <stdio.h>

int main()
{
    float phy, chem, bio, math, comp;
    float total, percentage;

    printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer:\n");

    scanf("%f %f %f %f %f",
          &phy, &chem, &bio, &math, &comp);

    total = phy + chem + bio + math + comp;
    percentage = total / 5;

    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 90)
        printf("Grade A");

    else if (percentage >= 80)
        printf("Grade B");

    else if (percentage >= 70)
        printf("Grade C");

    else if (percentage >= 60)
        printf("Grade D");

    else if (percentage >= 40)
        printf("Grade E");

    else
        printf("Grade F");

    return 0;
}