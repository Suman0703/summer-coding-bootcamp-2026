#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node(int value)
    {
        num = value;
        next = nullptr;
    }
};

class LinkedList
{
    Node *start = nullptr;

public:
    void insertEnd();
    void delatpos();
    void display();
};

void LinkedList::insertEnd()
{
    int value;
    cin >> value;

    Node *ptr = new Node(value);

    if (start == nullptr)
    {
        start = ptr;
        return;
    }

    Node *temp = start;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = ptr;
}

void LinkedList::delatpos()
{
    int pos;

    cout << "Enter Position: ";
    cin >> pos;

    if (pos < 1)
    {
        cout << "Invalid Position.";
        return;
    }

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    if (pos == 1)
    {
        Node *temp = start;
        start = start->next;
        delete temp;
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
        cout << "Invalid Position.";
        return;
    }

    prev->next = temp->next;

    delete temp;

    cout << "Deleted Successfully.";
}

void LinkedList::display()
{
    Node *temp = start;

    while (temp != nullptr)
    {
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    LinkedList list;

    cout << "Enter 4 values:\n";

    for (int i = 0; i < 4; i++)
        list.insertEnd();

    list.display();

    list.delatpos();

    list.display();
}#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node(int value)
    {
        num = value;
        next = nullptr;
    }
};

class LinkedList
{
    Node *start = nullptr;

public:
    void insertEnd();
    void delatpos();
    void display();
};

void LinkedList::insertEnd()
{
    int value;
    cin >> value;

    Node *ptr = new Node(value);

    if (start == nullptr)
    {
        start = ptr;
        return;
    }

    Node *temp = start;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = ptr;
}

void LinkedList::delatpos()
{
    int pos;

    cout << "Enter Position: ";
    cin >> pos;

    if (pos < 1)
    {
        cout << "Invalid Position.";
        return;
    }

    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    if (pos == 1)
    {
        Node *temp = start;
        start = start->next;
        delete temp;
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
        cout << "Invalid Position.";
        return;
    }

    prev->next = temp->next;

    delete temp;

    cout << "Deleted Successfully.";
}

void LinkedList::display()
{
    Node *temp = start;

    while (temp != nullptr)
    {
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    LinkedList list;

    cout << "Enter 4 values:\n";

    for (int i = 0; i < 4; i++)
        list.insertEnd();

    list.display();

    list.delatpos();

    list.display();
}