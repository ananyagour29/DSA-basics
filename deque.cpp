#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_front(40);
    q.push_front(50);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop_back();
    }
    return 0;
}