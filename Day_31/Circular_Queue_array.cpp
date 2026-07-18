#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int front, rear;

public:
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueue
    void enqueue()
    {
        int val;
        cout << "Enter value: ";
        cin >> val;

        if ((rear + 1) % size == front)
        {
            cout << "Queue is Full!!\n";
            return;
        }

        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
        cout << "Data inserted successfully.\n";
    }

    // Dequeue
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty!!\n";
            return;
        }

        cout << arr[front] << " deleted.\n";

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    // Display
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty.\n";
            return;
        }

        cout << "Queue elements: ";

        int i = front;

        while (true)
        {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }

    // Is Empty
    bool isEmpty()
    {
        return front == -1;
    }

    // Is Full
    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    // Destructor
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter size of Queue: ";
    cin >> n;

    Queue q1(n);

    int ch;

    do
    {
        cout << "\n===== Circular Queue Menu =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Is Empty\n";
        cout << "5. Is Full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            q1.enqueue();
            break;

        case 2:
            q1.dequeue();
            break;

        case 3:
            q1.display();
            break;

        case 4:
            if (q1.isEmpty())
                cout << "Queue is Empty.\n";
            else
                cout << "Queue is Not Empty.\n";
            break;

        case 5:
            if (q1.isFull())
                cout << "Queue is Full.\n";
            else
                cout << "Queue is Not Full.\n";
            break;

        case 6:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (ch != 6);

    return 0;
}