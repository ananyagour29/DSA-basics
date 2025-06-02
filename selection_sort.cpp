#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            if (min_idx != i)
            {
                swap(arr[i], arr[min_idx]);
            }
        }
    }
    return;
} //time complexity O( n*n) insertion bubble selection sort
int main()
{
    int n;
    cout << "enter no of elements" << endl;
    cin >> n;
    vector<int> v(n);
    cout << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selection_sort(v);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
