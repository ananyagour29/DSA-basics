#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    cout << "element of v1:" << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    cout << "element of v2:" << "\n";
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int ans_sum = 0;
    set<int> set1;
    for (auto ele : v1)
    {
        set1.insert(ele);
    }
    for (auto ele : v2)
    {
        if (set1.find(ele) != set1.end())
        {
            ans_sum += ele;
        }
    }
    cout << "ans" << " " << ans_sum;
    return 0;
}
