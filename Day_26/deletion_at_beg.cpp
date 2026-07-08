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
    void delbeg();
    void display();
};

void LinkedList::insertEnd()
{
    int value;
    cout << "Enter Value: ";
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

void LinkedList::delbeg()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty.";
        return;
    }

    Node *temp = start;
    start = start->next;
    temp->next = nullptr;

    delete temp;

    cout << "Node deleted successfully.\n";
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

    list.insertEnd();
    list.insertEnd();
    list.insertEnd();

    list.display();

    list.delbeg();

    list.display();
}