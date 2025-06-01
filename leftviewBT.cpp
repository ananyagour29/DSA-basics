#include <iostream>
#include <vector>
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
    void recursion(int level, vector<int> &res, Node *root)
    {
        if (root == NULL)
            return;
        if (res.size() == level)
            res.push_back(root->data);
        // recursion(level + 1, res, root->right); for right view
        recursion(level + 1, res, root->left);
        recursion(level + 1, res, root->right);
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    vector<int> result;

    // Start the recursion from level 0 and pass the result vector
    root->recursion(0, result, root);

    // Print the result
    for (auto val : result)
    {
        cout << val << " ";
    }

    return 0;
} // time complexityO(n)
// space complexity O(n)=worst  O(log n)=best case
