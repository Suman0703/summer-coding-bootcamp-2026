#include <iostream>
using namespace std;

class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = x;
        cout << x << " pushed into stack.\n";
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << arr[top] << " popped from stack.\n";
        top--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top Element: " << arr[top] << endl;
    }

    void isEmpty()
    {
        if (top == -1)
            cout << "Stack is Empty\n";
        else
            cout << "Stack is Not Empty\n";
    }

    void isFull()
    {
        if (top == size - 1)
            cout << "Stack is Full\n";
        else
            cout << "Stack is Not Full\n";
    }
};

int main()
{
    int n;
    cout << "Enter Stack Size: ";
    cin >> n;

    Stack s(n);

    int choice, value;

    do
    {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.isEmpty();
            break;

        case 5:
            s.isFull();
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}

