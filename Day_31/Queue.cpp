// Simple Queue using Array

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert();
void delete_element();
void peek();
void display();

int main()
{
    int choice;

    do
    {
        printf("\n***** MAIN MENU *****");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete_element();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}

// Insert (Enqueue)
void insert()
{
    int num;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &num);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = num;

    printf("Element inserted.\n");
}

// Delete (Dequeue)
void delete_element()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted.\n", queue[front]);
    front++;

    if (front > rear)
    {
        front = rear = -1;
    }
}

// Peek
void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Front element = %d\n", queue[front]);
}

// Display
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}