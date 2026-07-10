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
    ListNode* removeElements(ListNode* head, int val) {

        // Remove matching nodes from the beginning
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* curr = head;

        // Remove matching nodes from the remaining list
        while (curr != nullptr && curr->next != nullptr) {

            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};

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
        cout << "Linked List is Empty." << endl;
        return;
    }

    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = createList(n);

    cout << "\nOriginal Linked List:" << endl;
    display(head);

    int value;
    cout << "\nEnter value to remove: ";
    cin >> value;

    Solution obj;
    head = obj.removeElements(head, value);

    cout << "\nLinked List after removing elements:" << endl;
    display(head);

    return 0;
}