#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    // input.push(40);

    stack<int> st;
    while (!input.empty())
    {
        st.push(input.front());
        input.pop();
    }
    while (!st.empty())
    {
        // int value = st.top();
        //  st.pop();
        // cout << value << " ";
        input.push(st.top());
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}