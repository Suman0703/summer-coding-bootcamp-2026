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
    void reverse();
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
    {
        temp = temp->next;
    }

    temp->next = ptr;
}

void LinkedList::reverse()
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

void LinkedList::display()
{
    if (start == nullptr)
    {
        cout << "Linked List is Empty." << endl;
        return;
    }

    Node *temp = start;

    while (temp != nullptr)
    {
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    LinkedList list;

    cout << "Enter 5 values:\n";

    for (int i = 0; i < 5; i++)
    {
        list.insertEnd();
    }

    cout << "\nOriginal Linked List:\n";
    list.display();

    list.reverse();

    cout << "\nReversed Linked List:\n";
    list.display();

    return 0;
}