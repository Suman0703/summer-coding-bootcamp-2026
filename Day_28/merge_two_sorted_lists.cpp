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

// Merge two sorted linked lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr)
            return list2;

        if (list2 == nullptr)
            return list1;

        ListNode* head;

        if (list1->val <= list2->val) {
            head = list1;
            list1 = list1->next;
        }
        else {
            head = list2;
            list2 = list2->next;
        }

        ListNode* current = head;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            }
            else {
                current->next = list2;
                list2 = list2->next;
            }

            current = current->next;
        }

        if (list1 != nullptr)
            current->next = list1;
        else
            current->next = list2;

        return head;
    }
};

// Create a sorted linked list
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

    cout << "Enter number of nodes in first sorted linked list: ";
    cin >> n1;

    ListNode* list1 = createList(n1);

    cout << "\nEnter number of nodes in second sorted linked list: ";
    cin >> n2;

    ListNode* list2 = createList(n2);

    cout << "\nFirst Linked List:\n";
    display(list1);

    cout << "\nSecond Linked List:\n";
    display(list2);

    Solution obj;
    ListNode* merged = obj.mergeTwoLists(list1, list2);

    cout << "\n\nMerged Sorted Linked List:\n";
    display(merged);

    return 0;
}