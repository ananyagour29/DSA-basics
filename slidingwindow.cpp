#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> max_window(vector<int> &arr, int k)
{
    deque<int> dq;
    vector<int> result;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    result.push_back(arr[dq.front()]);
    for (int i = k; i < arr.size(); i++)
    {
        if (dq.front() == i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        result.push_back(arr[dq.front()]);
    }
    return result;
}
int main()
{
    vector<int> arr = {3, -4, 6, 8, 9, 5};
    int k = 3;
    vector<int> result = max_window(arr, k);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
