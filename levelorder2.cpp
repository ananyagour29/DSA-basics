#include <iostream>
#include <queue>
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
};
// void printLevelOrder(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();
//         cout << curr->data;
//         if (curr->left != NULL)
//         {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL)
//         {
//             q.push(curr->right);
//         }
//     }
// }
void printLevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    // q.push(NULL);
    while (!q.empty())
    {

        Node *curr = q.front();
        q.pop();

        cout << curr->data;
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printLevelOrder(root);
} // time complexity O(n)