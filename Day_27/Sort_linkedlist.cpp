#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node()
    {
        num = 0;
        next = nullptr;
    }

    Node(int num)
    {
        this->num = num;
        next = nullptr;
    }
};

class LinkedList
{
    Node *start = nullptr;

public:
    void insert();
    void display();
    void sort();
};

void LinkedList::insert()
{
    int value;

    cout << "Enter data: ";
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

void LinkedList::sort()
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

int main()
{
    LinkedList l;
    int n;

    cout << "How many nodes do you want to insert? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        l.insert();
    }

    cout << "\nBefore Sorting:\n";
    l.display();

    l.sort();

    cout << "\nAfter Sorting:\n";
    l.display();

    return 0;
}