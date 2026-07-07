#include <stdio.h> 

int main (){

    float a,b;
    printf("Enter Two numbers:");
    scanf("%f %f", &a, &b);

    char op;
    printf("Enter a operators:");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%f", a + b);
        break;
    case '-':
        printf("%f", a + b);
        break;
    case '*':
        printf("%f", a - b);
        break;
    case '/':
        if(b != 0)
          printf("%f", a / b);
        else 
          printf("Division is not possible");

        break;   
    default:
        printf("Operator is not valid");
        break;
    }

}