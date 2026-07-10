#include <iostream>
using namespace std;

// Definition for singly-linked list
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() {
        val = 0;
        next = nullptr;
    }

    ListNode(int x) {
        val = x;
        next = nullptr;
    }

    ListNode(int x, ListNode* next) {
        val = x;
        this->next = next;
    }
};

// Function to add two numbers represented as linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* start = new ListNode(0);
    ListNode* ptr = start;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry) {

        int sum = carry;

        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        int digit = sum % 10;

        ptr->next = new ListNode(digit);
        ptr = ptr->next;
    }

    return start->next;
}

// Create Linked List
ListNode* createList(int n) {

    if (n == 0)
        return nullptr;

    int data;
    cout << "Enter node 1: ";
    cin >> data;

    ListNode* head = new ListNode(data);
    ListNode* temp = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter node " << i << ": ";
        cin >> data;

        temp->next = new ListNode(data);
        temp = temp->next;
    }

    return head;
}

// Display Linked List
void display(ListNode* head) {

    if (head == nullptr) {
        cout << "NULL";
        return;
    }

    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL";
}

int main() {

    int n1, n2;

    cout << "Enter number of nodes in first linked list: ";
    cin >> n1;

    ListNode* l1 = createList(n1);

    cout << "\nEnter number of nodes in second linked list: ";
    cin >> n2;

    ListNode* l2 = createList(n2);

    cout << "\nFirst Linked List:\n";
    display(l1);

    cout << "\nSecond Linked List:\n";
    display(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "\n\nResultant Linked List:\n";
    display(result);

    return 0;
}