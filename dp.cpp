#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// int solve(int i, vector<int> &height, vector<int> &dp)
// {
//     if (i == 0)
//         return 0;
//     if (dp[i] != -1)
//         return dp[i];
//     int one = solve(i - 1, height, dp) + abs(height[i] - height[i - 1]);
//     int two = INT_MAX;
//     if (i > 1)
//     {
//         two = solve(i - 2, height, dp) + abs(height[i] - height[i - 2]);
//     }

//     return dp[i] = min(one, two);
// }
// Function to calculate minimum energy
int frogJump(int n, vector<int> &height)
{
    // vector<int> dp(n, 0);
    int a = 0;
    int b = abs(height[1] - height[0]);
    for (int i = 2; i < n; i++)
    {
        int one = b + abs(height[i] - height[i - 1]);
        int two = a + abs(height[i] - height[i - 2]);
        int c = min(one, two);
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    vector<int> height{10, 20, 10};
    int n = height.size();

    cout << frogJump(n, height) << endl;

    return 0;
}
