#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class CircularQueue
{
    Node *front;
    Node *rear;

public:
    CircularQueue()
    {
        front = rear = nullptr;
    }

    void enqueue();
    void dequeue();
    void peek();
    void display();
    bool isEmpty();
};

// Enqueue
void CircularQueue::enqueue()
{
    int val;
    cout << "Enter value: ";
    cin >> val;

    Node *ptr = new Node(val);

    if (front == nullptr)
    {
        front = rear = ptr;
        rear->next = front;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
        rear->next = front;
    }

    cout << "Data inserted!\n";
}

// Dequeue
void CircularQueue::dequeue()
{
    if (front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    if (front == rear)
    {
        cout << front->data << " deleted\n";
        delete front;
        front = rear = nullptr;
    }
    else
    {
        Node *temp = front;
        cout << front->data << " deleted\n";
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

// Peek
void CircularQueue::peek()
{
    if (front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Front Element = " << front->data << endl;
}

// Display
void CircularQueue::display()
{
    if (front == nullptr)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node *temp = front;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);

    cout << endl;
}

// Is Empty
bool CircularQueue::isEmpty()
{
    return front == nullptr;
}

int main()
{
    CircularQueue q;
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

        switch (ch)
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
            if (q.isEmpty())
                cout << "Queue is Empty\n";
            else
                cout << "Queue is Not Empty\n";
            break;

        case 6:
            cout << "Program End\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (ch != 6);

    return 0;
}