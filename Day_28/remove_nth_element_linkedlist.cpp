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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* first = head;
        ListNode* second = head;

        // Move first pointer n steps ahead
        for (int i = 0; i < n; i++) {
            first = first->next;
        }

        // If removing the first node
        if (first == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move both pointers
        while (first->next != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Delete nth node from end
        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;

        return head;
    }
};

// Function to create linked list
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

// Display linked list
void display(ListNode* head) {

    if (head == nullptr) {
        cout << "Linked List is Empty.\n";
        return;
    }

    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL\n";
}

int main() {

    int size;

    cout << "Enter number of nodes: ";
    cin >> size;

    ListNode* head = createList(size);

    cout << "\nOriginal Linked List:\n";
    display(head);

    int n;
    cout << "\nEnter nth node from end to remove: ";
    cin >> n;

    Solution obj;
    head = obj.removeNthFromEnd(head, n);

    cout << "\nLinked List after deletion:\n";
    display(head);

    return 0;
}