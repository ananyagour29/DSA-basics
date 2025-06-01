#include <iostream>
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

    void inorder(Node *root, int &count)
    {
        if (root == NULL)
            return;

        inorder(root->left, count);
        if (root->left == NULL && root->right == NULL)
        {
            count++;
        }

        inorder(root->right, count);
    }
    int leafNode(Node *root)
    {
        int count = 0;
        inorder(root, count);
        return count;
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << root->leafNode(root);
}