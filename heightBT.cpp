#include <iostream>
#include <algorithm>
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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}
int size(Node *root)
{
    if (root == NULL)
        return 0;
    return size(root->left) + size(root->right) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    cout << height(root);
    cout << "\n";
    cout << size(root);
}
// time complexity O(n);
// space complexity O(n)=worst skewed trees  O(log n)=balanceed tree