#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &v, int low, int high)
{
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}
void quicksort(vector<int> &v, int low, int high)
{
    if (low > high) // in these lasr stage goes to when 2 elementsr there so no =
    {
        return;
    }
    int pi = partition(v, low, high);
    quicksort(v, low, pi - 1);
    quicksort(v, pi + 1, high);
}
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
    quicksort(v, 0, n - 1);
    cout << "sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
