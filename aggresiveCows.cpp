#include <bits/stdc++.h>
using namespace std;

bool yes(vector<int> &arr, int mid, int cows)
{

    int placedcows = 1;
    int laststall = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if ((arr[i] - laststall) >= mid)
        {
            placedcows++;
            laststall = arr[i];
        }
    }
    if (placedcows == cows)
    {

        return true;
    }

    else
    {
        return false;
    }
}

int aggressiveCows(vector<int> &stalls, int cows)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int lo = 1;
    int hi = stalls[n - 1] - stalls[0];
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (yes(stalls, mid, cows))
        {
            // hi=mid-1;
            lo = mid + 1;
            ans = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, cows;
    cin >> n >> cows;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++)
        cin >> stalls[i];

    cout << aggressiveCows(stalls, cows) << endl;
    return 0;
}
