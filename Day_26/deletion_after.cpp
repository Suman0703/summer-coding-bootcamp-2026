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
    void delafter();
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

void LinkedList::delafter()
{
    int key;

    cout << "Delete after: ";
    cin >> key;

    Node *temp = start;

    while (temp != nullptr)
    {
        if (temp->num == key)
        {
            if (temp->next == nullptr)
            {
                cout << "No node exists after it.";
                return;
            }

            Node *del = temp->next;

            temp->next = del->next;

            delete del;

            cout << "Deleted Successfully.";
            return;
        }

        temp = temp->next;
    }

    cout << "Value not found.";
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

    list.delafter();

    list.display();
}