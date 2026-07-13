#include <stdio.h>

int arr[100];
int top = -1;
int size;

void push()
{
    int value;

    if (top == size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    top++;
    arr[top] = value;

    printf("%d pushed into stack.\n", value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack.\n", arr[top]);
    top--;
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", arr[top]);
}

void isEmpty()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Stack is Not Empty\n");
}

void isFull()
{
    if (top == size - 1)
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");
}

int main()
{
    int choice;

    printf("Enter Stack Size: ");
    scanf("%d", &size);

    do
    {
        printf("\n===== STACK MENU =====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            isEmpty();
            break;

        case 5:
            isFull();
            break;

        case 6:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}
