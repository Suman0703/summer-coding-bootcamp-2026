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
    void after();
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

void LinkedList::after()
{
    int value, key;

    cout << "Value to insert: ";
    cin >> value;

    cout << "Insert after: ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            Node *ptr = new Node(value);

            ptr->next = temp->next;
            temp->next = ptr;

            return;
        }

        temp = temp->next;
    }

    cout << "Value not found";
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

    list.after();

    list.display();
}