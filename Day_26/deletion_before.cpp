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
    void delbefore();
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

void LinkedList::delbefore()
{
    int key;

    cout << "Delete before: ";
    cin >> key;

    if (start == nullptr || start->next == nullptr)
    {
        cout << "Not enough nodes.";
        return;
    }

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

            cout << "Deleted Successfully.";
            return;
        }

        prev = curr;
        curr = curr->next;
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

    list.delbefore();

    list.display();
}