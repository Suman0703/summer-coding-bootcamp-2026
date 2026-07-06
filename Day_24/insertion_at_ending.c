#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *next;
};

struct Node *start = NULL;

// Function Declarations
void insertAtEnd();
void display();

int main()
{
    int choice;

    do
    {
        printf("\n===== INSERTION AT END =====\n");
        printf("1. Insert Node\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertAtEnd();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}

void insertAtEnd()
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &newNode->num);

    newNode->next = NULL;

    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        temp = start;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Node inserted successfully.\n");
}

void display()
{
    struct Node *temp;

    if (start == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    temp = start;

    printf("\nLinked List:\n");

    while (temp != NULL)
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }

    printf("NULL\n");
}