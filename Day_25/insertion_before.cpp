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
    void before();
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

void LinkedList::before()
{
    int value, key;

    cout << "Value to insert: ";
    cin >> value;

    cout << "Insert before: ";
    cin >> key;

    Node *ptr = new Node(value);

    if (start == nullptr)
    {
        cout << "Empty List";
        delete ptr;
        return;
    }

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

    cout << "Value not found";
    delete ptr;
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

    list.before();

    list.display();
}