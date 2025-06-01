// suum of repetitive elements
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    int sum = 0;
    for (auto ele : m)
    {
        if (ele.second > 1)
        {
            sum += ele.first;
        }
    }
    cout << "ans " << sum;
    return 0;
}