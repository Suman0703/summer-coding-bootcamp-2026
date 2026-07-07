// Write a C program to find Armstrong's
#include <stdio.h>
#include <math.h>

int main()
{
    int original, count = 0;
    double sum = 0;
    printf("Enter the Value of num:");
    scanf("%d", &original);

    int num = original;

    while (num > 0)
    {
        num /= 10;
        count++;
    }
    printf("%d", count);
    num = original;

    while (num > 0)
    {
        int rem = num%10; //3 5
        // printf("%d ",rem);
        sum += pow(rem, count); // 27+125 + 1
        // int power = 1;
        // for(int i = 1; i <=count; i++) {
        //     power *= rem;
        // }
        // sum += power;
        num /= 10; //15 1 
    }
    printf("\n%d\n", sum);

    if (sum == original)
        printf("%d is an Armstrong Number", original);
    else
        printf("%d is NOT an Armstrong Number", original);

    return 0;
}