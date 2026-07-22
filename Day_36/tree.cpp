#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class BST
{
    struct Node
    {
        int data;
        Node *left;
        Node *right;
        Node(int value) : data(value), left(nullptr), right(nullptr) {}
    };

    Node *root;

    Node *insertNode(Node *node, int value)
    {
        if (!node)
            return new Node(value);

        if (value < node->data)
            node->left = insertNode(node->left, value);
        else if (value > node->data)
            node->right = insertNode(node->right, value);

        return node;
    }

    Node *searchNode(Node *node, int value)
    {
        if (!node)
            return nullptr;

        if (value == node->data)
            return node;

        if (value < node->data)
            return searchNode(node->left, value);

        return searchNode(node->right, value);
    }

    Node *minimumNode(Node *node)
    {
        if (!node)
            return nullptr;

        return node->left ? minimumNode(node->left) : node;
    }

    Node *maximumNode(Node *node)
    {
        if (!node)
            return nullptr;

        return node->right ? maximumNode(node->right) : node;
    }

    Node *deleteNode(Node *node, int value)
    {
        if (!node)
            return nullptr;

        if (value < node->data)
            node->left = deleteNode(node->left, value);
        else if (value > node->data)
            node->right = deleteNode(node->right, value);
        else
        {
            if (!node->left)
            {
                Node *rightChild = node->right;
                delete node;
                return rightChild;
            }

            if (!node->right)
            {
                Node *leftChild = node->left;
                delete node;
                return leftChild;
            }

            Node *succ = minimumNode(node->right);
            node->data = succ->data;
            node->right = deleteNode(node->right, succ->data);
        }

        return node;
    }

    void inorderNode(Node *node)
    {
        if (!node)
            return;

        inorderNode(node->left);
        cout << node->data << " ";
        inorderNode(node->right);
    }

    void preorderNode(Node *node)
    {
        if (!node)
            return;

        cout << node->data << " ";
        preorderNode(node->left);
        preorderNode(node->right);
    }

    void postorderNode(Node *node)
    {
        if (!node)
            return;

        postorderNode(node->left);
        postorderNode(node->right);
        cout << node->data << " ";
    }

    void levelOrderNode(Node *node)
    {
        if (!node)
            return;

        queue<Node *> q;
        q.push(node);

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            cout << current->data << " ";

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }

    int heightNode(Node *node)
    {
        if (!node)
            return 0;

        return 1 + max(heightNode(node->left), heightNode(node->right));
    }

    int countNodesNode(Node *node)
    {
        if (!node)
            return 0;

        return 1 + countNodesNode(node->left) + countNodesNode(node->right);
    }

    int leafNodesNode(Node *node)
    {
        if (!node)
            return 0;

        if (!node->left && !node->right)
            return 1;

        return leafNodesNode(node->left) + leafNodesNode(node->right);
    }

    int internalNodesNode(Node *node)
    {
        if (!node || (!node->left && !node->right))
            return 0;

        return 1 + internalNodesNode(node->left) + internalNodesNode(node->right);
    }

public:
    BST() : root(nullptr) {}

    void insert(int value)
    {
        root = insertNode(root, value);
    }

    void search(int value)
    {
        if (searchNode(root, value))
            cout << "Value found\n";
        else
            cout << "Value not found\n";
    }

    void deleteValue(int value)
    {
        root = deleteNode(root, value);
    }

    void inorder()
    {
        inorderNode(root);
        cout << "\n";
    }

    void preorder()
    {
        preorderNode(root);
        cout << "\n";
    }

    void postorder()
    {
        postorderNode(root);
        cout << "\n";
    }

    void levelOrder()
    {
        levelOrderNode(root);
        cout << "\n";
    }

    void minimum()
    {
        Node *node = minimumNode(root);
        if (node)
            cout << node->data << "\n";
        else
            cout << "Tree is empty\n";
    }

    void maximum()
    {
        Node *node = maximumNode(root);
        if (node)
            cout << node->data << "\n";
        else
            cout << "Tree is empty\n";
    }

    void height()
    {
        cout << heightNode(root) << "\n";
    }

    void countNodes()
    {
        cout << countNodesNode(root) << "\n";
    }

    void leafNodes()
    {
        cout << leafNodesNode(root) << "\n";
    }

    void internalNodes()
    {
        cout << internalNodesNode(root) << "\n";
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
            tree.deleteValue(value);
            break;

        case 4:
            tree.inorder();
            break;

        case 5:
            tree.preorder();
            break;

        case 6:
            tree.postorder();
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
            tree.height();
            break;

        case 11:
            tree.countNodes();
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