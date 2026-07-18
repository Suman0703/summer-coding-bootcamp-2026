#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node(int val)
    {
        num = val;
        next = nullptr;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    void enqueue();
    void dequeue();
    void display();
    void peek();
    bool isEmpty();
};

void Queue::enqueue()
{
    int val;
    cout << "Enter value: ";
    cin >> val;

    Node *ptr = new Node(val);

    if(front == nullptr)
    {
        front = rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }

    cout << "Data inserted!\n";
}

void Queue::dequeue()
{
    if(front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node *temp = front;

    cout << front->num << " deleted\n";

    front = front->next;

    delete temp;

    if(front == nullptr)
        rear = nullptr;
}

void Queue::display()
{
    if(front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node *temp = front;

    while(temp != nullptr)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void Queue::peek()
{
    if(front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Front Element = " << front->num << endl;
}

bool Queue::isEmpty()
{
    return front == nullptr;
}

int main()
{
    Queue q;
    int ch;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Peek";
        cout << "\n5. Is Empty";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                q.enqueue();
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                q.peek();
                break;

            case 5:
                if(q.isEmpty())
                    cout << "Queue is Empty\n";
                else
                    cout << "Queue is Not Empty\n";
                break;

            case 6:
                cout << "Program End";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(ch != 6);

    return 0;
}