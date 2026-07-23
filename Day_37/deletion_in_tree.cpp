#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

class BST
{
    Node *root = nullptr;

public:
    void insert(int value)
    {
        root = insert(root, value);
    }

    void deleteValue(int key)
    {
        root = deleteNode(root, key);
    }

    void inOrder()
    {
        inOrder(root);
        cout << endl;
    }

private:
    // Insert Function
    Node *insert(Node *root, int value)
    {
        if (root == nullptr)
        {
            return new Node(value);
        }

        if (value < root->data)
        {
            root->left = insert(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = insert(root->right, value);
        }

        return root;
    }

    // Inorder Traversal
    void inOrder(Node *root)
    {
        if (root == nullptr)
            return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    // Find Minimum Node
    Node *findMin(Node *root)
    {
        Node *temp = root;

        while (temp->left != nullptr)
        {
            temp = temp->left;
        }

        return temp;
    }

    // Delete Function
    Node *deleteNode(Node *root, int key)
    {
        // Tree Empty
        if (root == nullptr)
        {
            return nullptr;
        }

        // Search Left
        if (key < root->data)
        {
            root->left = deleteNode(root->left, key);
        }

        // Search Right
        else if (key > root->data)
        {
            root->right = deleteNode(root->right, key);
        }

        // Node Found
        else
        {
            //No Child
            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }

            //Only Right Child
            else if (root->left == nullptr)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }

            // Only Left Child
            else if (root->right == nullptr)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }

            //Two Children
            else
            {
                Node *temp = findMin(root->right);

                root->data = temp->data;

                root->right = deleteNode(root->right, temp->data);
            }
        }

        return root;
    }
};

int main()
{
    BST tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Before Deletion : ";
    tree.inOrder();

    tree.deleteValue(20);   // Leaf Node

    cout << "After Deleting 20 : ";
    tree.inOrder();

    tree.deleteValue(30);   // One Child

    cout << "After Deleting 30 : ";
    tree.inOrder();

    tree.deleteValue(50);   // Two Children

    cout << "After Deleting 50 : ";
    tree.inOrder();

    return 0;
}