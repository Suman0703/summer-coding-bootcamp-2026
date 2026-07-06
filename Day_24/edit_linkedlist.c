#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *next;
};

struct Node *start = NULL;

// Function Declarations
void insert();
void display();
void edit();

int main()
{
    int choice;

    do
    {
        printf("\n===== EDIT LINKED LIST =====\n");
        printf("1. Insert Node\n");
        printf("2. Display List\n");
        printf("3. Edit Node\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case 3:
            edit();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

void insert()
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory Allocation Failed!\n");
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
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    printf("\nLinked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }

    printf("NULL\n");
}

void edit()
{
    int oldValue, newValue, found = 0;
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    printf("Enter value to edit: ");
    scanf("%d", &oldValue);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    while (temp != NULL)
    {
        if (temp->num == oldValue)
        {
            temp->num = newValue;
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if (found)
        printf("Node updated successfully.\n");
    else
        printf("Node not found.\n");
}