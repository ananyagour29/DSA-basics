#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 3, 4, 4, 4, 4};

    sort(arr.begin(), arr.end()); // direct algorithm
    int freq = 1;
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = arr[i];
        }
    }
    if (freq > arr.size() / 2)
    {
        cout << arr[arr.size() - 1];
    }
}
// time complexity is O(logn n)
