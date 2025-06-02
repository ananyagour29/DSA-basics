#include <iostream>
#include <vector>

using namespace std;

class Queue
{
    vector<int> v; // for array
    int front;
    int back;

public:
    Queue()
    {
        front = -1;
        back = -1;
    }

    void enqueue(int data)
    {

        v.push_back(data);
        back++;
        if (back == 0) // fpr initializing first position
        {
            front = 0;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {

            return;
        }
        front++;

        if (front > back)
        {

            front = 0;
            back = -1;

            v.clear();
        }
    }

    int getFront()
    {
        if (isEmpty())
        {

            return -1;
        }
        return v[front];
    }

    bool isEmpty()
    {
        return front > back;
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
    // q.dequeue();
    // q.enqueue(400);

    cout << q.getFront() << "\n"; // Should print 400

    // Optional: Clear the queue
    while (!q.isEmpty())
    {
        cout << q.getFront() << " ";
        q.dequeue();
    }
    cout << "\n";

    return 0;
}