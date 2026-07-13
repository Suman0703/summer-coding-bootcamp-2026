#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Node{
public:
    int num;
    Node *next;

    Node(){
        this->num = 0;
        next = nullptr;
    }

    Node(int num){
        this->num = num;
        next = nullptr;
    }
};

class LinkedList{
    Node *start = nullptr;

public:
    void insert();
    void display();
    void del();
    void atbeg();
    void atend();
    void count();
    void edit();
    void before();
    void after();
    void atpos();
    void sort();
    void reverse();
    void delbeg();
    void delend();
    void delbefore();
    void delafter();
    void delatpos();
};

// cpp
// LinkedList L1;
// *ptr = new LinkedList; // ptr->atBeg();

// java
// ptr = new LinkedList; // ptr.atBeg();

int main(){
    LinkedList L1;

    int ch1;
    char choice1 = 'y';

    system("cls"); // clrscr();

    do
    {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT");
        printf("\n 2. DISPLAY");
        printf("\n 3. DELETE");
        printf("\n 4. EDIT");
        printf("\n 5. COUNT NODES");
        printf("\n 6. SORTING");
        printf("\n 7. REVERSE");
        printf("\n 8. EXIT");
        printf("\n\n Enter Your Choice = ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            L1.insert();
            break;

        case 2:
            L1.display();
            break;

        case 3:
            L1.del();
            break;

        case 4:
            L1.edit();
            break;

        case 5:
            L1.count();
            break;

        case 6:
            L1.sort();
            break;

        case 7:
            L1.reverse();
            break;

        case 8:
            choice1 = 'n';
            break;

        default:
            printf("Invalid Choice");
        }

    } while (choice1 == 'y');

    return 0;
}

void LinkedList::insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT");
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

void LinkedList::del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        printf("\n 1. ATBEG");
        printf("\n 2. ATEND");
        printf("\n 3. BEFORE");
        printf("\n 4. AFTER");
        printf("\n 5. ATPOSI");
        printf("\n 6. EXIT");
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

void LinkedList::display()
{
    if (start == nullptr)
    {
        printf("Empty Linked List.");
        return;
    }

    Node *temp = start;
    do
    {
        printf("%d -> ", temp->num);
        temp = temp->next;
    } while (temp != start);

    printf("(back to start)");
}

void LinkedList::atbeg()
{
    int val;

    printf("Enter data of node: ");
    scanf("%d", &val);

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        ptr->next = ptr;
        start = ptr;
    }
    else
    {
        Node *last = start;
        while (last->next != start)
            last = last->next;

        ptr->next = start;
        last->next = ptr;
        start = ptr;
    }
}

void LinkedList::atend()
{
    int val;

    printf("Enter data of node: ");
    scanf("%d", &val);

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        ptr->next = ptr;
        start = ptr;
        return;
    }

    Node *last = start;
    while (last->next != start)
        last = last->next;

    last->next = ptr;
    ptr->next = start;
}

void LinkedList::count()
{
    if (start == nullptr)
    {
        printf("Empty Linked List.");
        return;
    }

    int count = 0;
    Node *temp = start;

    do
    {
        count++;
        temp = temp->next;
    } while (temp != start);

    printf("Count: %d", count);
}

void LinkedList::edit()
{
    int current_value, new_value;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Enter the value to edit: ");
    scanf("%d", &current_value);

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    Node *temp = start;
    do
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            printf("Node updated successfully.");
            return;
        }
        temp = temp->next;
    } while (temp != start);

    printf("Value not found in the linked list.");
}

void LinkedList::before()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    int val, key;
    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert before: ");
    scanf("%d", &key);

    Node *ptr = new Node(val);
    Node *curr = start;
    Node *prev = nullptr;

    do
    {
        if (curr->num == key)
            break;

        prev = curr;
        curr = curr->next;
    } while (curr != start);

    if (curr->num != key)
    {
        printf("Value not found.");
        delete ptr;
        return;
    }

    if (curr == start)
    {
        Node *last = start;
        while (last->next != start)
            last = last->next;

        ptr->next = start;
        last->next = ptr;
        start = ptr;
        return;
    }

    prev->next = ptr;
    ptr->next = curr;
}

void LinkedList::after()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    int val, key;
    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Insert after: ");
    scanf("%d", &key);

    Node *temp = start;
    do
    {
        if (temp->num == key)
        {
            Node *ptr = new Node(val);
            ptr->next = temp->next;
            temp->next = ptr;
            return;
        }
        temp = temp->next;
    } while (temp != start);

    printf("Value not found.");
}

void LinkedList::atpos()
{
    int val, pos;

    printf("Enter value to insert: ");
    scanf("%d", &val);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    Node *ptr = new Node(val);

    if (start == nullptr)
    {
        if (pos != 1)
        {
            printf("Invalid Position.");
            delete ptr;
            return;
        }

        ptr->next = ptr;
        start = ptr;
        return;
    }

    if (pos == 1)
    {
        Node *last = start;
        while (last->next != start)
            last = last->next;

        ptr->next = start;
        last->next = ptr;
        start = ptr;
        return;
    }

    Node *temp = start;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == start)
        {
            printf("Invalid Position.");
            delete ptr;
            return;
        }
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void LinkedList::sort()
{
    if (start == nullptr || start->next == start)
    {
        printf("Linked List is Empty or has only one node.");
        return;
    }

    Node *last = start;
    while (last->next != start)
        last = last->next;

    for (Node *i = start; i != last; i = i->next)
    {
        for (Node *j = i->next; j != start; j = j->next)
        {
            if (i->num > j->num)
            {
                int temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    printf("Linked List sorted in ascending order.");
}

void LinkedList::reverse()
{
    if (start == nullptr || start->next == start)
    {
        printf("Linked List is Empty or has only one node.");
        return;
    }

    Node *prev = nullptr;
    Node *curr = start;
    Node *next_node = nullptr;
    Node *last = start;

    while (last->next != start)
        last = last->next;

    do
    {
        next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    } while (curr != start);

    start->next = prev;
    start = prev;
    printf("Linked List reversed.");
}

void LinkedList::delbeg()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == start)
    {
        delete start;
        start = nullptr;
        printf("Node deleted from beginning.");
        return;
    }

    Node *last = start;
    while (last->next != start)
        last = last->next;

    Node *temp = start;
    start = start->next;
    last->next = start;
    delete temp;
    printf("Node deleted from beginning.");
}

void LinkedList::delend()
{
    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    if (start->next == start)
    {
        delete start;
        start = nullptr;
        printf("Node deleted from end.");
        return;
    }

    Node *prev = start;
    Node *temp = start->next;

    while (temp->next != start)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = start;
    delete temp;
    printf("Node deleted from end.");
}

void LinkedList::delbefore()
{
    int key;

    if (start == nullptr || start->next == start)
    {
        printf("Not enough nodes to delete before a value.");
        return;
    }

    printf("Delete before: ");
    scanf("%d", &key);

    Node *prev = nullptr;
    Node *curr = start;

    do
    {
        if (curr->next->num == key)
            break;

        prev = curr;
        curr = curr->next;
    } while (curr != start);

    if (curr->next->num != key)
    {
        printf("Value not found.");
        return;
    }

    if (curr == start)
    {
        Node *last = start;
        while (last->next != start)
            last = last->next;

        start = start->next;
        last->next = start;
        delete curr;
        printf("Node deleted before the given value.");
        return;
    }

    prev->next = curr->next;
    delete curr;
    printf("Node deleted before the given value.");
}

void LinkedList::delafter()
{
    int key;

    if (start == nullptr)
    {
        printf("Linked List is Empty.");
        return;
    }

    printf("Delete after: ");
    scanf("%d", &key);

    Node *temp = start;
    do
    {
        if (temp->num == key)
            break;
        temp = temp->next;
    } while (temp != start);

    if (temp->num != key)
    {
        printf("Value not found.");
        return;
    }

    Node *to_delete = temp->next;
    if (to_delete == temp)
    {
        delete to_delete;
        start = nullptr;
        printf("Node deleted after the given value.");
        return;
    }

    if (to_delete == start)
        start = start->next;

    temp->next = to_delete->next;
    delete to_delete;
    printf("Node deleted after the given value.");
}

void LinkedList::delatpos()
{
    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalid Position.");
        return;
    }

    if (pos == 1)
    {
        if (start->next == start)
        {
            delete start;
            start = nullptr;
            printf("Node deleted from position 1.");
            return;
        }

        Node *last = start;
        while (last->next != start)
            last = last->next;

        Node *temp = start;
        start = start->next;
        last->next = start;
        delete temp;
        printf("Node deleted from position 1.");
        return;
    }

    Node *prev = start;
    Node *temp = start->next;
    int i = 2;

    while (temp != start && i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == start || i != pos)
    {
        printf("Invalid Position.");
        return;
    }

    prev->next = temp->next;
    delete temp;
    printf("Node deleted from the specified position.");
}