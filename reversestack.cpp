#include <iostream>
#include <stack>
using namespace std;
void reverse(stack<int> &st)
{
    stack<int> temp1, temp2;
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    while (!temp1.empty())
    {
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while (!temp2.empty())
    {
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    while (!st.empty())
    {
        int curr = st.top();
        cout << curr << "\n";
        st.pop();
    }
}