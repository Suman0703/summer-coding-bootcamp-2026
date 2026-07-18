//using array
// #include <iostream>
// using namespace std;

// class PriorityQueue {
//     int *arr;
//     int size;
//     int rear;

// public:
//     PriorityQueue(int s) {
//         size = s;
//         arr = new int[size];
//         rear = -1;
//     }

//     // INSERT (enqueue)
//     void enqueue() {
//         int val;
//         cout << "Enter value: ";
//         cin >> val;

//         if (rear == size - 1) {
//             cout << "Queue is full !!\n";
//             return;
//         }

//         arr[++rear] = val;
//         cout << "Data inserted !!\n";
//     }

//     // DELETE highest priority (max element)
//     void dequeue() {
//         if (rear == -1) {
//             cout << "Queue is empty !!\n";
//             return;
//         }

//         // Find max element index
//         int maxIndex = 0;
//         for (int i = 1; i <= rear; i++) {
//             if (arr[i] > arr[maxIndex]) {
//                 maxIndex = i;
//             }
//         }

//         cout << arr[maxIndex] << " deleted !!\n";

//         // Shift elements
//         for (int i = maxIndex; i < rear; i++) {
//             arr[i] = arr[i + 1];
//         }

//         rear--;
//     }

//     // DISPLAY
//     void display() {
//         if (rear == -1) {
//             cout << "Queue is empty\n";
//             return;
//         }

//         cout << "Queue elements: ";
//         for (int i = 0; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     // isEmpty
//     bool isEmpty() {
//         return (rear == -1);
//     }

//     // isFull
//     bool isFull() {
//         return (rear == size - 1);
//     }
// };

// int main() {
//     PriorityQueue q1(5);
//     int ch;
//     char choice = 'y';

//     do {
//         cout << "\n1. ENQUEUE";
//         cout << "\n2. DEQUEUE (Highest Priority)";
//         cout << "\n3. DISPLAY";
//         cout << "\n4. isEmpty";
//         cout << "\n5. isFull";
//         cout << "\n6. EXIT";
//         cout << "\nEnter Your Choice = ";
//         cin >> ch;

//         switch (ch) {
//             case 1:
//                 q1.enqueue();
//                 break;
//             case 2:
//                 q1.dequeue();
//                 break;
//             case 3:
//                 q1.display();
//                 break;
//             case 4:
//                 cout << (q1.isEmpty() ? "Empty\n" : "Not Empty\n");
//                 break;
//             case 5:
//                 cout << (q1.isFull() ? "Full\n" : "Not Full\n");
//                 break;
//             case 6:
//                 choice = 'n';
//                 break;
//             default:
//                 cout << "INVALID CHOICE\n";
//         }
//     } while (choice == 'y');

//     return 0;
// }

//using linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class PriorityQueue {
    Node* front;

public:
    PriorityQueue() {
        front = NULL;
    }

    // INSERT (sorted insertion)
    void enqueue() {
        int val;
        cout << "Enter value: ";
        cin >> val;

        Node* newNode = new Node(val);

        // If empty or highest priority
        if (front == NULL || val > front->data) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* temp = front;

            // Find correct position
            while (temp->next != NULL && temp->next->data >= val) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        cout << "Data inserted !!\n";
    }

    // DELETE (remove highest priority)
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty !!\n";
            return;
        }

        Node* temp = front;
        cout << temp->data << " deleted !!\n";

        front = front->next;
        delete temp;
    }

    // DISPLAY
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // isEmpty
    bool isEmpty() {
        return (front == NULL);
    }
};

int main() {
    PriorityQueue q1;
    int ch;
    char choice = 'y';

    do {
        cout << "\n1. ENQUEUE";
        cout << "\n2. DEQUEUE (Highest Priority)";
        cout << "\n3. DISPLAY";
        cout << "\n4. isEmpty";
        cout << "\n5. EXIT";
        cout << "\nEnter Your Choice = ";
        cin >> ch;

        switch (ch) {
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
                cout << (q1.isEmpty() ? "Empty\n" : "Not Empty\n");
                break;
            case 5:
                choice = 'n';
                break;
            default:
                cout << "INVALID CHOICE\n";
        }
    } while (choice == 'y');

    return 0;
}