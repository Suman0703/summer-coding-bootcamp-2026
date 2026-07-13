#include <iostream>
using namespace std;

class Stack
{
    int size;
    int* arr;
    int top = -1;

public:
    Stack(int s){
        size = s;
        arr = new int[size];
    }
    void push(int x)
    {
        if (top == size-1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        else {

        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

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

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}