#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

Node *top = nullptr;

void atbeg();
void delbeg();

int main()
{
    return 0;
}

void atbeg()
{
    Node *ptr = new Node();
    cout << "Enter data of node: ";
    cin >> ptr->num;
    ptr->next = nullptr;

    if (top == nullptr)
        top = ptr;
    else
    {
        ptr->next = top;
        top = ptr;
    }
}

void delbeg()
{
    if (top == nullptr)
    {
        cout << "Linked List is Empty.\n";
        return;
    }

    Node *temp = top;
    top = top->next;
    temp->next = nullptr;
    delete temp;

    cout << "Node deleted from beginning.\n";
}
