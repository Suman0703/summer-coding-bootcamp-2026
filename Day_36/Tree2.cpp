// Binary Search Tree:

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

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
    BST() : root(nullptr) {}

    void insert(int key)
    {
        root = insert(root, key);
    }

    void inOrder()
    {
        inOrder(root);
        cout << "\n";
    }

    void preOrder()
    {
        preOrder(root);
        cout << "\n";
    }

    void postOrder()
    {
        postOrder(root);
        cout << "\n";
    }

    int countNodes()
    {
        return count(root);
    }

    int height()
    {
        return height(root);
    }

    void search(int key)
    {
        bool found = search(root, key);
        if (found)
            cout << "Value " << key << " found in BST\n";
        else
            cout << "Value " << key << " NOT found in BST\n";
    }

    void minimum()
    {
        if (root == nullptr)
        {
            cout << "BST is empty\n";
            return;
        }
        Node *n = findMin(root);
        cout << "Minimum: " << n->data << "\n";
    }

    void maximum()
    {
        if (root == nullptr)
        {
            cout << "BST is empty\n";
            return;
        }
        Node *n = findMax(root);
        cout << "Maximum: " << n->data << "\n";
    }

    void levelOrder()
    {
        if (root == nullptr)
        {
            cout << "BST is empty\n";
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
        cout << "\n";
    }

    void leafNodes()
    {
        int leaves = countLeafNodes(root);
        cout << "Leaf Nodes: " << leaves << "\n";
    }

    void internalNodes()
    {
        int internals = countInternalNodes(root);
        cout << "Internal Nodes: " << internals << "\n";
    }

private:
    Node *insert(Node *root, int value)
    {
        if (root == nullptr)
        {
            Node *ptr = new Node(value);
            return ptr;
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

    int count(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        return count(root->left) + count(root->right) + 1;
    }

    int height(Node *root)
    {
        if (root == nullptr)
        {
            return -1;
        }
        return max(height(root->left), height(root->right)) + 1;
    }

    void preOrder(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }

    bool search(Node *root, int key)
    {
        if (root == nullptr)
        {
            return false;
        }
        if (root->data == key)
        {
            return true;
        }
        if (key < root->data)
        {
            return search(root->left, key);
        }
        return search(root->right, key);
    }

    Node *findMin(Node *root)
    {
        Node *curr = root;
        while (curr && curr->left != nullptr)
            curr = curr->left;
        return curr;
    }

    Node *findMax(Node *root)
    {
        Node *curr = root;
        while (curr && curr->right != nullptr)
            curr = curr->right;
        return curr;
    }

    int countLeafNodes(Node *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }

    int countInternalNodes(Node *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 0;
        return 1 + countInternalNodes(root->left) + countInternalNodes(root->right);
    }

};

int main()
{
    BST tree;

    int choice, value;

    do
    {
        cout << "\n========== BST MENU ==========\n";
        cout << "1.Insert\n";
        cout << "2.Search\n";
        cout << "3.Delete\n";
        cout << "4.Inorder\n";
        cout << "5.Preorder\n";
        cout << "6.Postorder\n";
        cout << "7.Level Order\n";
        cout << "8.Minimum\n";
        cout << "9.Maximum\n";
        cout << "10.Height\n";
        cout << "11.Count Nodes\n";
        cout << "12.Leaf Nodes\n";
        cout << "13.Internal Nodes\n";
        cout << "15.Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            tree.insert(value);
            break;

        case 2:
            cout << "Enter Value : ";
            cin >> value;
            tree.search(value);
            break;

        case 3:
            cout << "Enter Value : ";
            cin >> value;
            // tree.deleteValue(value);
            break;

        case 4:
            tree.inOrder();
            break;

        case 5:
            tree.preOrder();
            break;

        case 6:
            tree.postOrder();
            break;

        case 7:
            tree.levelOrder();
            break;

        case 8:
            tree.minimum();
            break;

        case 9:
            tree.maximum();
            break;

        case 10:
            cout << "Height: " << tree.height() << "\n";
            break;

        case 11:
            cout << "Node Count: " << tree.countNodes() << "\n";
            break;

        case 12:
            tree.leafNodes();
            break;

        case 13:
            tree.internalNodes();
            break;

        case 15:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 15);

    return 0;
}