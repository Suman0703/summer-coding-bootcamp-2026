#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

class BST {
    Node *root;

public:
    BST() {
        root = NULL;
    }

    //---------------- INSERT -----------------
    Node* insert(Node *root, int value) {
        if (root == NULL) {
            return new Node(value);
        }
        if (value < root->data)
            root->left = insert(root->left, value);
        else if (value > root->data)
            root->right = insert(root->right, value);
        return root;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    //---------------- SEARCH -----------------
    bool searchHelper(Node *root, int key) {
        if (root == NULL)
            return false;
        if (root->data == key)
            return true;
        if (key < root->data)
            return searchHelper(root->left, key);
        return searchHelper(root->right, key);
    }

    void search(int key) {
        if (searchHelper(root, key))
            cout << key << " is Found in the BST.\n";
        else
            cout << key << " is Not Found in the BST.\n";
    }

    //---------------- DELETE -----------------
    Node* deleteNode(Node* root, int key) {
        if (root == NULL) return root;

        if (key < root->data)
            root->left = deleteNode(root->left, key);
        else if (key > root->data)
            root->right = deleteNode(root->right, key);
        else {
            // Node with only one child or no child
            if (root->left == NULL) {
                Node *temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node *temp = root->left;
                delete root;
                return temp;
            }
            // Node with two children: Get inorder successor (smallest in the right subtree)
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    void deleteValue(int value) {
        root = deleteNode(root, value);
    }

    //---------------- INORDER -----------------
    void inorderHelper(Node *root) {
        if (root == NULL) return;
        inorderHelper(root->left);
        cout << root->data << " ";
        inorderHelper(root->right);
    }

    void inorder() {
        inorderHelper(root);
        cout << endl;
    }

    //---------------- PREORDER -----------------
    void preorderHelper(Node *root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preorderHelper(root->left);
        preorderHelper(root->right);
    }

    void preorder() {
        preorderHelper(root);
        cout << endl;
    }

    //---------------- POSTORDER -----------------
    void postorderHelper(Node *root) {
        if (root == NULL) return;
        postorderHelper(root->left);
        postorderHelper(root->right);
        cout << root->data << " ";
    }

    void postorder() {
        postorderHelper(root);
        cout << endl;
    }

    //---------------- LEVEL ORDER -----------------
    void levelOrder() {
        if (root == NULL) return;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl;
    }

    //---------------- HEIGHT -----------------
    int heightHelper(Node *root) {
        if (root == NULL) return -1;
        int leftHeight = heightHelper(root->left);
        int rightHeight = heightHelper(root->right);
        return max(leftHeight, rightHeight) + 1;
    }

    void height() {
        cout << "Height = " << heightHelper(root) << endl;
    }

    //---------------- COUNT NODES -----------------
    int countNodesHelper(Node *root) {
        if (root == NULL) return 0;
        return countNodesHelper(root->left) + countNodesHelper(root->right) + 1;
    }

    void countNodes() {
        cout << "Total Nodes = " << countNodesHelper(root) << endl;
    }

    //---------------- LEAF NODES -----------------
    int leafNodesHelper(Node *root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) return 1;
        return leafNodesHelper(root->left) + leafNodesHelper(root->right);
    }

    void leafNodes() {
        cout << "Leaf Nodes = " << leafNodesHelper(root) << endl;
    }

    //---------------- INTERNAL NODES -----------------
    int internalNodesHelper(Node *root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) return 0;
        return internalNodesHelper(root->left) + internalNodesHelper(root->right) + 1;
    }

    void internalNodes() {
        cout << "Internal Nodes = " << internalNodesHelper(root) << endl;
    }

    //---------------- MIN MAX -----------------
    Node* findMin(Node* root) {
        while (root && root->left != NULL)
            root = root->left;
        return root;
    }

    void minimum() {
        Node* minNode = findMin(root);
        if (minNode)
            cout << "Minimum = " << minNode->data << endl;
        else
            cout << "Tree is empty.\n";
    }

    void maximum() {
        Node* curr = root;
        while (curr && curr->right != NULL)
            curr = curr->right;
        
        if (curr)
            cout << "Maximum = " << curr->data << endl;
        else
            cout << "Tree is empty.\n";
    }
};

int main() {
    BST tree;
    int choice, value;

    do {
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

        switch (choice) {
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
                cout << "Inorder: ";
                tree.inorder();
                break;
            case 5:
                cout << "Preorder: ";
                tree.preorder();
                break;
            case 6:
                cout << "Postorder: ";
                tree.postorder();
                break;
            case 7:
                cout << "Level Order: ";
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