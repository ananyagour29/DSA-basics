#include <iostream>
#include <vector>
using namespace std;
void bubble_sort_recursion(vector<int> &v, int n)
{
    // int n = v.size();
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
    }
    bubble_sort_recursion(v, n - 1);
}
int main()
{
    int n;
    cout << " enter no of elements" << endl;
    cin >> n;
    vector<int> v(n);
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bubble_sort_recursion(v, n);
    cout << "done" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}