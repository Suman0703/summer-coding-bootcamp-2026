#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    Node *ptr = new Node();
    return 0;
}
