#include <iostream>
#include <vector>
#include <algorithm> //for max function
using namespace std;

int longest(vector<int> arr, int k)
{

    int res = 0;
    int i = 0;
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    { // O(n^2)
        int sum = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int longestSubarrayWithSumK(vector<int> &arr, int k)
{
    int n = arr.size();
    int i = 0;
    int maxlen = 0;
    int j = 0;
    int sum = 0;
    while (j < n)
    { // O(N)
        sum += arr[j];
        while (sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, j - i + 1);
        }
        j++;
    }
    return maxlen;
}

int main()
{
    // vector<int> arr = {3, 7, 4, 3, 3, 3, 1, 1, 1, 7}; // Sample array with positive integers
    // int k = 12;
    vector<int> arr = {1, -1, 5, -2, 3};
    int k = 3; // Desired sum
    cout << "Longest subarray length with sum " << k << " is: " << longest(arr, k) << endl;
    return 0;
}
