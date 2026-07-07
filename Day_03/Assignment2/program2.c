// C program to calculate total average and percentage of five subjects

#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    printf("Enter Marks of Math, English, Hindi, Punjabi and Science: ");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float sum = a + b + c + d + e;

    float average = sum / 5.0;

    float percentage = (sum / 500.0) * 100;

    printf("Total Sum of the Marks is: %.2f\n", sum);

    printf("Average of the Marks is: %.2f\n", average);

    printf("Percentage of the Marks is: %.2f%%\n", percentage);

    return 0;
}