#include <iostream>
using namespace std;

int top = -1;
int size;

void is_empty()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }
}

void is_full()
{
    if (top == size - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << "Popped Element: " << top << endl;
    top--;
}

void push(int arr[], int n)
{
    cout << "Enter Elements in Stack: ";
    for (int i = 0; i < n; i++)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        cin >> arr[top];
    }
}

int main()
{
    cout << "Enter Total No. of Elements in Stack: ";
    cin >> size;  
    int arr[size];

    top = -1;

    push(arr, size);

    is_full();
    // ::is_empty();

    return 0;
}