#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *next;
    struct Node *prev;
};

struct Node *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atbeg();
void atend();
void before();
void after();
void atpos();
void delbeg();
void delend();
void delbefore();
void delafter();
void delatpos();

int main()
{
    int ch1;
    char choice1 = 'y';
    start = NULL;
    system("cls");

    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT     ");
        printf("\n 2. DISPLAY     ");
        printf("\n 3. DELETE      ");
        printf("\n 4. EDIT        ");
        printf("\n 5. COUNT NODES ");
        printf("\n 6. SORTING      ");
        printf("\n 7. REVERSE     ");
        printf("\n 8. EXIT        ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            del();
            break;
        case 4:
            edit();
            break;
        case 5:
            count();
            break;
        case 6:
            sort();
            break;
        case 7:
            reverse();
            break;
        case 8:
            choice1 = 'n';
            break;
        default:
            printf("invalid choice");
        }
    } while (choice1 == 'y');

    return 0;
}

void insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG ");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER ");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            atbeg();
            break;
        case 2:
            atend();
            break;
        case 3:
            before();
            break;
        case 4:
            after();
            break;
        case 5:
            atpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. DELETE ATBEG ");
        printf("\n 2. DELETE ATEND");
        printf("\n 3. DELETE BEFORE");
        printf("\n 4. DELETE AFTER ");
        printf("\n 5. DELETE ATPOSI");
        printf("\n 6. EXIT      ");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch2);

        switch (ch2)
        {
        case 1:
            delbeg();
            break;
        case 2:
            delend();
            break;
        case 3:
            delbefore();
            break;
        case 4:
            delafter();
            break;
        case 5:
            delatpos();
            break;
        case 6:
            choice2 = 'n';
            break;
        default:
            printf("INVALID CHOICE");
        }
    } while (choice2 == 'y');
}

void atbeg()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);

    ptr->prev = NULL;
    ptr->next = start;

    if (start != NULL)
    {
        start->prev = ptr;
    }

    start = ptr;
}

void display()
{
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("NULL <- ");

    while (temp != NULL)
    {
        printf("%d", temp->num);

        if (temp->next != NULL)
            printf(" <-> ");

        temp = temp->next;
    }

    printf(" -> NULL");
}

void atend()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data of node: ");
    scanf("%d", &ptr->num);

    ptr->next = NULL;

    if (start == NULL)
    {
        ptr->prev = NULL;
        start = ptr;
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;
}

void count()
{
    int count = 0;
    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Empty Linked List.");
        return;
    }

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Count: %d", count);
}

void edit()
{
    int current_value, new_value;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    struct Node *temp = start;

    while (temp != NULL)
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            printf("Node updated successfully.");
            return;
        }

        temp = temp->next;
    }

    printf("Value not found in the linked list.");
}

void before()
{
    int val, key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert before: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found.");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->num = val;

    ptr->next = temp;
    ptr->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = ptr;
    else
        start = ptr;

    temp->prev = ptr;
}

void after()
{
    int val, key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert after: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found.");
        return;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->num = val;

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = ptr;

    temp->next = ptr;
}

void atpos()
{
    int val, pos;

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->num = val;

    if (pos == 1)
    {
        ptr->prev = NULL;
        ptr->next = start;

        if (start != NULL)
            start->prev = ptr;

        start = ptr;
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        free(ptr);
        return;
    }

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = ptr;

    temp->next = ptr;
}

void delbeg()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *temp = start;

    start = start->next;

    if (start != NULL)
        start->prev = NULL;

    free(temp);

    printf("Node deleted from beginning.");
}

void delend()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == NULL)
    {
        free(start);
        start = NULL;
        printf("Node deleted.");
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    free(temp);

    printf("Node deleted from end.");
}

void delbefore()
{
    int key;

    if (start == NULL || start->next == NULL)
    {
        printf("Not enough nodes.");
        return;
    }

    printf("Delete before: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->prev == NULL)
    {
        printf("No node exists before the given value.");
        return;
    }

    struct Node *del = temp->prev;

    if (del->prev != NULL)
    {
        del->prev->next = temp;
        temp->prev = del->prev;
    }
    else
    {
        start = temp;
        temp->prev = NULL;
    }

    free(del);

    printf("Node deleted successfully.");
}

void delafter()
{
    int key;

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Delete after: ");
    scanf("%d", &key);

    struct Node *temp = start;

    while (temp != NULL && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("No node exists after the given value.");
        return;
    }

    struct Node *del = temp->next;

    temp->next = del->next;

    if (del->next != NULL)
        del->next->prev = temp;

    free(del);

    printf("Node deleted successfully.");
}

void delatpos()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (pos == 1)
    {
        struct Node *temp = start;
        start = start->next;

        if (start != NULL)
            start->prev = NULL;

        free(temp);

        printf("Node deleted.");
        return;
    }

    struct Node *temp = start;

    for (int i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position.");
        return;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Node deleted successfully.");
}

void sort()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *i, *j;
    int temp;

    for (i = start; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->num > j->num)
            {
                temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    printf("Linked List Sorted Successfully.");
}

void reverse()
{
    if (start == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    struct Node *temp = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("NULL <- ");

    while (temp != NULL)
    {
        printf("%d", temp->num);

        if (temp->prev != NULL)
            printf(" <-> ");

        temp = temp->prev;
    }

    printf(" -> NULL");
}