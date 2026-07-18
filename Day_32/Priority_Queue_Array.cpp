#include <iostream>
using namespace std;

class PriorityQueue
{
    int arr[5];
    int rear;

public:
    PriorityQueue()
    {
        rear = -1;
    }

    // Enqueue
    void enqueue()
    {
        int val;
        cout << "Enter value: ";
        cin >> val;

        if (rear == 4)
        {
            cout << "Queue is Full!\n";
            return;
        }

        rear++;
        arr[rear] = val;

        cout << "Data inserted.\n";
    }

    // Dequeue (Delete Highest Priority)
    void dequeue()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty!\n";
            return;
        }

        int maxIndex = 0;

        // Find highest priority (largest value)
        for (int i = 1; i <= rear; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        cout << arr[maxIndex] << " deleted.\n";

        // Shift elements
        for (int i = maxIndex; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }

        rear--;
    }

    // Peek
    void peek()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty!\n";
            return;
        }

        int max = arr[0];

        for (int i = 1; i <= rear; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        cout << "Highest Priority Element = " << max << endl;
    }

    // Display
    void display()
    {
        if (rear == -1)
        {
            cout << "Queue is Empty!\n";
            return;
        }

        cout << "Queue: ";

        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Is Empty
    void isEmpty()
    {
        if (rear == -1)
            cout << "Queue is Empty\n";
        else
            cout << "Queue is Not Empty\n";
    }

    // Is Full
    void isFull()
    {
        if (rear == 4)
            cout << "Queue is Full\n";
        else
            cout << "Queue is Not Full\n";
    }
};

int main()
{
    PriorityQueue q;
    int ch;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Is Empty";
        cout << "\n6. Is Full";
        cout << "\n7. Exit";
        cout << "\nEnter Choice: ";
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
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            q.isEmpty();
            break;

        case 6:
            q.isFull();
            break;

        case 7:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (ch != 7);

    return 0;
}