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
    void atend();
    void atpos();
    void display();
};

void LinkedList::atend()
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

void LinkedList::atpos()
{
    int value, pos;

    cout << "Value to insert: ";
    cin >> value;

    cout << "Position: ";
    cin >> pos;

    Node *ptr = new Node(value);

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
        cout << "Invalid Position";
        delete ptr;
        return;
    }

    ptr->next = temp->next;
    temp->next = ptr;
}

void LinkedList::display()
{
    Node *temp = start;

    while (temp != nullptr)
    {
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main()
{
    LinkedList list;

    cout << "Enter 3 values:\n";
    list.atend();
    list.atend();
    list.atend();

    list.atpos();

    list.display();
}