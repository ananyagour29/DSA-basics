#include <iostream>
#include <list>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

//  Node*prev=NULL;
//  Node *head=NULL;
void convertBtToDLL(Node *root, Node *&prev, Node *&head)
{
    if (root == NULL)
        return;
    convertBtToDLL(root->left, prev, head);
    if (prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    convertBtToDLL(root->right, prev, head);
}

void printDLL(Node *head)
{
    Node *curr = head; // Start from the head of the DLL
    cout << "Doubly Linked List: ";
    while (curr)
    {
        cout << curr->data << " "; // Print node data
        curr = curr->right;        // Move to the next node
    }
}

int main()
{

    Node *root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(2);
    root->right->left = new Node(1);
    root->right->left->left = new Node(4);
    root->right->left->right = new Node(6);
    Node *prev = NULL;
    Node *head = NULL;
    convertBtToDLL(root, prev, head);
    printDLL(head);
}
// time complexity O(n)