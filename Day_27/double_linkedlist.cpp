#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node *prev;

    Node()
    {
        num = 0;
        next = nullptr;
        prev = nullptr;
    }

    Node(int value)
    {
        num = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *start;

public:
    DoublyLinkedList()
    {
        start = nullptr;
    }
    void insert();
    void display();
    void del();
    void edit();
    void count();
    void sort();
    void reverse();

    void atBeg();
    void atEnd();
    void before();
    void after();
    void atPos();

    void delBeg();
    void delEnd();
    void delBefore();
    void delAfter();
    void delAtPos();
};

int main()
{
    DoublyLinkedList list;

    int ch;
    char choice = 'y';

    do
    {
        cout << "\n===== DOUBLY LINKED LIST =====\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Delete\n";
        cout << "4. Edit\n";
        cout << "5. Count\n";
        cout << "6. Sort\n";
        cout << "7. Reverse\n";
        cout << "8. Exit\n";

        cout << "Enter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            list.insert();
            break;

        case 2:
            list.display();
            break;

        case 3:
            list.del();
            break;

        case 4:
            list.edit();
            break;

        case 5:
            list.count();
            break;

        case 6:
            list.sort();
            break;

        case 7:
            list.reverse();
            break;

        case 8:
            choice = 'n';
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice == 'y');

    return 0;
}
void DoublyLinkedList::insert()
{
    int ch;
    char choice = 'y';

    do
    {
        cout << "\n----- INSERT MENU -----";
        cout << "\n1. At Beginning";
        cout << "\n2. At End";
        cout << "\n3. Before";
        cout << "\n4. After";
        cout << "\n5. At Position";
        cout << "\n6. Exit";

        cout << "\nEnter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            atBeg();
            break;

        case 2:
            atEnd();
            break;

        case 3:
            before();
            break;

        case 4:
            after();
            break;

        case 5:
            atPos();
            break;

        case 6:
            choice = 'n';
            break;

        default:
            cout << "\nInvalid Choice";
        }

    } while (choice == 'y');
}

void DoublyLinkedList::del()
{
    int ch;
    char choice = 'y';

    do
    {
        cout << "\n----- DELETE MENU -----";
        cout << "\n1. Delete At Beginning";
        cout << "\n2. Delete At End";
        cout << "\n3. Delete Before";
        cout << "\n4. Delete After";
        cout << "\n5. Delete At Position";
        cout << "\n6. Exit";

        cout << "\nEnter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            delBeg();
            break;

        case 2:
            delEnd();
            break;

        case 3:
            delBefore();
            break;

        case 4:
            delAfter();
            break;

        case 5:
            delAtPos();
            break;

        case 6:
            choice = 'n';
            break;

        default:
            cout << "\nInvalid Choice";
        }

    } while (choice == 'y');
}

void DoublyLinkedList::atBeg()
{
    Node *ptr = new Node();

    cout << "Enter data of node : ";
    cin >> ptr->num;

    ptr->prev = nullptr;
    ptr->next = start;

    if (start != nullptr)
    {
        start->prev = ptr;
    }

    start = ptr;

    cout << "Node Inserted Successfully.";
}

void DoublyLinkedList::display()
{
    Node *temp = start;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    cout << "NULL <- ";

    while (temp != nullptr)
    {
        cout << temp->num;

        if (temp->next != nullptr)
        {
            cout << " <-> ";
        }

        temp = temp->next;
    }

    cout << " -> NULL";
}

void DoublyLinkedList::atEnd()
{
    Node *ptr = new Node();

    cout << "Enter data of node : ";
    cin >> ptr->num;

    ptr->next = nullptr;

    if (start == nullptr)
    {
        ptr->prev = nullptr;
        start = ptr;
        cout << "Node Inserted Successfully.";
        return;
    }

    Node *temp = start;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;

    cout << "Node Inserted Successfully.";
}

void DoublyLinkedList::count()
{
    int count = 0;
    Node *temp = start;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total Nodes = " << count;
}

void DoublyLinkedList::edit()
{
    int currentValue, newValue;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    cout << "Enter value to edit : ";
    cin >> currentValue;

    cout << "Enter new value : ";
    cin >> newValue;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == currentValue)
        {
            temp->num = newValue;
            cout << "Node Updated Successfully.";
            return;
        }

        temp = temp->next;
    }

    cout << "Value Not Found.";
}

void DoublyLinkedList::before()
{
    int val, key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    cout << "Enter value to insert : ";
    cin >> val;

    cout << "Insert before : ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Value Not Found.";
        return;
    }

    Node *ptr = new Node();
    ptr->num = val;

    ptr->next = temp;
    ptr->prev = temp->prev;

    if (temp->prev != nullptr)
    {
        temp->prev->next = ptr;
    }
    else
    {
        start = ptr;
    }

    temp->prev = ptr;

    cout << "Node Inserted Successfully.";
}

void DoublyLinkedList::after()
{
    int val, key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    cout << "Enter value to insert : ";
    cin >> val;

    cout << "Insert after : ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Value Not Found.";
        return;
    }

    Node *ptr = new Node();
    ptr->num = val;

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != nullptr)
    {
        temp->next->prev = ptr;
    }

    temp->next = ptr;

    cout << "Node Inserted Successfully.";
}

void DoublyLinkedList::atPos()
{
    int val, pos;

    cout << "Enter value to insert : ";
    cin >> val;

    cout << "Enter position : ";
    cin >> pos;

    Node *ptr = new Node();
    ptr->num = val;

    if (pos == 1)
    {
        ptr->prev = nullptr;
        ptr->next = start;

        if (start != nullptr)
        {
            start->prev = ptr;
        }

        start = ptr;

        cout << "Node Inserted Successfully.";
        return;
    }

    Node *temp = start;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid Position.";
        delete ptr;
        return;
    }

    ptr->next = temp->next;
    ptr->prev = temp;

    if (temp->next != nullptr)
    {
        temp->next->prev = ptr;
    }

    temp->next = ptr;

    cout << "Node Inserted Successfully.";
}

void DoublyLinkedList::delBeg()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    Node *temp = start;

    start = start->next;

    if (start != nullptr)
    {
        start->prev = nullptr;
    }

    delete temp;

    cout << "Node Deleted Successfully.";
}

void DoublyLinkedList::delEnd()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    if (start->next == nullptr)
    {
        delete start;
        start = nullptr;

        cout << "Node Deleted Successfully.";
        return;
    }

    Node *temp = start;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->prev->next = nullptr;

    delete temp;

    cout << "Node Deleted Successfully.";
}

void DoublyLinkedList::delBefore()
{
    int key;

    if (start == nullptr || start->next == nullptr)
    {
        cout << "Not Enough Nodes.";
        return;
    }

    cout << "Delete before : ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == nullptr || temp->prev == nullptr)
    {
        cout << "No Node Exists Before Given Value.";
        return;
    }

    Node *del = temp->prev;

    if (del->prev != nullptr)
    {
        del->prev->next = temp;
        temp->prev = del->prev;
    }
    else
    {
        start = temp;
        temp->prev = nullptr;
    }

    delete del;

    cout << "Node Deleted Successfully.";
}

void DoublyLinkedList::delAfter()
{
    int key;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    cout << "Delete after : ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr && temp->num != key)
    {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "No Node Exists After Given Value.";
        return;
    }

    Node *del = temp->next;

    temp->next = del->next;

    if (del->next != nullptr)
    {
        del->next->prev = temp;
    }

    delete del;

    cout << "Node Deleted Successfully.";
}

void DoublyLinkedList::delAtPos()
{
    int pos;

    cout << "Enter Position : ";
    cin >> pos;

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    if (pos == 1)
    {
        Node *temp = start;

        start = start->next;

        if (start != nullptr)
        {
            start->prev = nullptr;
        }

        delete temp;

        cout << "Node Deleted Successfully.";
        return;
    }

    Node *temp = start;

    for (int i = 1; i < pos && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid Position.";
        return;
    }

    temp->prev->next = temp->next;

    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;

    cout << "Node Deleted Successfully.";
}

void DoublyLinkedList::sort()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
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

    cout << "Linked List Sorted Successfully.";
}

void DoublyLinkedList::reverse()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    Node *temp = start;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    cout << "NULL <- ";

    while (temp != nullptr)
    {
        cout << temp->num;

        if (temp->prev != nullptr)
        {
            cout << " <-> ";
        }

        temp = temp->prev;
    }

    cout << " -> NULL";
}

