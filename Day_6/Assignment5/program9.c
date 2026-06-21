// Q10. Write a C program to display a menu for arithmetic operations and perform the selected operation using switch case.

#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("\nMENU");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Sum = %.2f", num1 + num2);
            break;

        case 2:
            printf("Difference = %.2f", num1 - num2);
            break;

        case 3:
            printf("Product = %.2f", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Quotient = %.2f", num1 / num2);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}