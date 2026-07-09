#include <iostream>
#include <cstdlib> 

using namespace std;

struct Node
{
    int num;
    Node *next;
};

Node *start = nullptr;

void insertNode(); 
void display();
void del();
void edit();
void countNodes(); 
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
    system("cls");

    do
    {
        cout << "\n LINKED LIST PROJECT \n";
        cout << "\n 1. INSERT      ";
        cout << "\n 2. DISPLAY     ";
        cout << "\n 3. DELETE      ";
        cout << "\n 4. EDIT        ";
        cout << "\n 5. COUNT NODES ";
        cout << "\n 6. SORTING      ";
        cout << "\n 7. REVERSE     ";
        cout << "\n 8. EXIT        ";
        cout << "\n\n Enter Your Choice = ";
        cin >> ch1;

        switch (ch1)
        {
        case 1:
            insertNode();
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
            countNodes();
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
            cout << "Invalid choice\n";
        }
    } while (choice1 == 'y' || choice1 == 'Y');

    return 0;
}

void insertNode()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        cout << "\n 1. ATBEG ";
        cout << "\n 2. ATEND";
        cout << "\n 3. BEFORE";
        cout << "\n 4. AFTER ";
        cout << "\n 5. ATPOSI";
        cout << "\n 6. EXIT      ";
        cout << "\n\n Enter Your Choice = ";
        cin >> ch2;

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
            cout << "INVALID CHOICE\n";
        }
    } while (choice2 == 'y' || choice2 == 'Y');
}

void del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        cout << "\n 1. DELETE ATBEG ";
        cout << "\n 2. DELETE ATEND";
        cout << "\n 3. DELETE BEFORE";
        cout << "\n 4. DELETE AFTER ";
        cout << "\n 5. DELETE ATPOSI";
        cout << "\n 6. EXIT      ";
        cout << "\n\n Enter Your Choice = ";
        cin >> ch2;

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
            cout << "INVALID CHOICE\n";
        }
    } while (choice2 == 'y' || choice2 == 'Y');
}

void atbeg()
{
    Node *ptr = new Node();
    cout << "Enter data of node: ";
    cin >> ptr->num;
    ptr->next = nullptr;

    if (start == nullptr)
        start = ptr;
    else
    {
        ptr->next = start;
        start = ptr;
    }
}

void display()
{
    Node *temp = start;

    if (start == nullptr)
    {
        cout << "Empty Linked List.\n";
        return;
    }

    while (temp != nullptr)
    {
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void atend()
{
    Node *temp = start;
    Node *ptr = new Node();

    cout << "Enter data of node: ";
    cin >> ptr->num;
    ptr->next = nullptr;

    if (start == nullptr)
    {
        start = ptr;
        return;
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = ptr;
}

void countNodes()
{
    int count = 0;
    Node *temp = start;

    if (start == nullptr)
    {
        cout << "Empty Linked List.\n";
        return;
    }

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    cout << "Count: " << count << "\n";
}

void edit()
{
    int current_value, new_value;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    cout << "Enter the value to edit: ";
    cin >> current_value;

    cout << "Enter the new value: ";
    cin >> new_value;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == current_value)
        {
            temp->num = new_value;
            cout << "Node updated successfully.\n";
            return;
        }

        temp = temp->next;
    }

    cout << "Value not found in the linked list.\n";
}

void before()
{
    int val, key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> val;

    cout << "Insert before: ";
    cin >> key;

    Node *ptr = new Node();
    ptr->num = val;
    ptr->next = nullptr;

    if (start->num == key)
    {
        ptr->next = start;
        start = ptr;
        return;
    }

    Node *prev = start;
    Node *curr = start->next;

    while (curr != nullptr)
    {
        if (curr->num == key)
        {
            prev->next = ptr;
            ptr->next = curr;
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    cout << "Value not found.\n";
    delete ptr;
}

void after()
{
    int val, key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> val;

    cout << "Insert after: ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            Node *ptr = new Node();
            ptr->num = val;
            ptr->next = temp->next;
            temp->next = ptr;
            return;
        }

        temp = temp->next;
    }

    cout << "Value not found.\n";
}

void atpos()
{
    int val, pos;

    cout << "Enter value to insert: ";
    cin >> val;

    cout << "Enter position: ";
    cin >> pos;

    Node *ptr = new Node();
    ptr->num = val;
    ptr->next = nullptr;

    if (pos == 1)
    {
        ptr->next = start;
        start = ptr;
        return;
    }

    Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid Position.\n";
        delete ptr;
        return;
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void delbeg()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    Node *temp = start;
    start = start->next;
    temp->next = nullptr;
    delete temp;

    cout << "Node deleted from beginning.\n";
}

void delend()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    if (start->next == nullptr)
    {
        delete start;
        start = nullptr;
        cout << "Node deleted from end.\n";
        return;
    }

    Node *prev = start;
    Node *temp = start->next;

    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = nullptr;
    delete temp;
    cout << "Node deleted from end.\n";
}

void delbefore()
{
    int key;

    if (start == nullptr || start->next == nullptr)
    {
        cout << "Not enough nodes to delete before a value.\n";
        return;
    }

    cout << "Delete before: ";
    cin >> key;

    Node *prev = nullptr;
    Node *curr = start;

    while (curr != nullptr && curr->next != nullptr)
    {
        if (curr->next->num == key)
        {
            Node *temp = curr;
            if (prev == nullptr)
                start = curr->next;
            else
                prev->next = curr->next;
                
            delete temp;
            cout << "Node deleted before the given value.\n";
            return;
        }

        prev = curr;
        curr = curr->next;
    }

    cout << "Value not found.\n";
}

void delafter()
{
    int key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    cout << "Delete after: ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            if (temp->next == nullptr)
            {
                cout << "No node exists after the given value.\n";
                return;
            }

            Node *to_delete = temp->next;
            temp->next = to_delete->next;
            delete to_delete;
            cout << "Node deleted after the given value.\n";
            return;
        }

        temp = temp->next;
    }

    cout << "Value not found.\n";
}

void delatpos()
{
    int pos;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1)
    {
        cout << "Invalid Position.\n";
        return;
    }

    if (pos == 1)
    {
        Node *temp = start;
        start = start->next;
        delete temp;
        cout << "Node deleted from position 1.\n";
        return;
    }

    Node *prev = start;
    Node *temp = start->next;
    int i = 2;

    while (temp != nullptr && i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == nullptr)
    {
        cout << "Invalid Position.\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Node deleted from the specified position.\n";
}


void reverse()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty." << endl;
        return;
    }

    Node *prev = nullptr;
    Node *curr = start;
    Node *next = nullptr;

    while (curr != nullptr)
    {  
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;       
    }

    start = prev;

    cout << "Linked List Reversed Successfully." << endl;
}

void sort()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty." << endl;
        return;
    }

    if (start->next == nullptr)
    {
        cout << "Only one node present. Already sorted." << endl;
        return;
    }

    Node *i, *j;
    int temp;

    for (i = start; i->next != nullptr; i = i->next)
    {
        for (j = i->next; j != nullptr; j = j->next)
        {
            if (i->num > j->num)
            {
                temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }

    cout << "Linked List Sorted Successfully." << endl;
}