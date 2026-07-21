// Tree:

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int num){
        data = num;
        left = right = nullptr;
    }
};

int count(Node *root){
    if(root == nullptr){
        return 0;
    }
    return count(root->left) + count(root->right) + 1;
}

int height(Node *root){
    if (root->left == nullptr && root->right == nullptr){
        return 0;
    }
    if (root == nullptr) {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

void preOrder(Node *root){
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root){
    if (root == nullptr) {
        return;
    }
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root){
    if (root == nullptr) {
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(25);
    root->left->right = new Node(27);
    root->right->left = new Node(35);
    root->right->right = new Node(40);

    cout << "Total nodes of the tree: " << count(root) << endl;
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Pre-Order Traversal of the tree: ";
    preOrder(root);
    cout << endl;
    cout << "In-Order Traversal of the tree: ";
    inOrder(root);
    cout << endl;
    cout << "Post-Order Traversal of the tree: ";
    postOrder(root);
    cout << endl;

    return 0;
}