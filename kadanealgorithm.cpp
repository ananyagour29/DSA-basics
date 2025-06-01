#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    // calculate sum using time complexity O(n)
    int CurrSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        CurrSum += arr[i];
        maxSum = max(maxSum, CurrSum); // this  is inbuilt function
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    cout << maxSum;
    return 0;
}
// complexity O(n) kadane algorithm
