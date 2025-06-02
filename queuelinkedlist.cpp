#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }
    void enqueue(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }
    void dequeue()
    {
        if (head == NULL)
        {

            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            free(temp);
        }
    }
    bool isEmpty()
    {
        return head == NULL;
    }
    int front()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            return head->data;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(40);
    // q.dequeue();
    // q.dequeue();
    q.dequeue();
    q.enqueue(400);

    cout << q.front() << "\n";
    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.dequeue();
    }
    return 0;
}