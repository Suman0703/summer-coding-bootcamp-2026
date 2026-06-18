#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Add two linked lists
struct Node* addLists(struct Node* l1, struct Node* l2) {
    struct Node *head = NULL, *tail = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        int digit = sum % 10;

        struct Node* newNode = createNode(digit);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Display list
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    // 617 => 7->1->6
    struct Node* l1 = createNode(7);
    l1->next = createNode(1);
    l1->next->next = createNode(6);

    // 295 => 5->9->2
    struct Node* l2 = createNode(5);
    l2->next = createNode(9);
    l2->next->next = createNode(2);

    struct Node* result = addLists(l1, l2);

    printf("Sum List: ");
    display(result);

    return 0;
}