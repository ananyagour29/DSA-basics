#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1; // size of temporary
    int n2 = right - mid;
    vector<int> leftarr(n1);
    vector<int> rightarr(n2);
    for (int i = 0; i < n1; i++)
    {
        leftarr[i] = arr[left + i]; // starting elements
    }
    for (int i = 0; i < n2; i++)
    {
        rightarr[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            arr[k++] = leftarr[i++];
        }
        else
        {
            arr[k++] = rightarr[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = leftarr[i++];
    }
    while (j < n2)
    {
        arr[k++] = rightarr[j++];
    }
}
void mergesort(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int main()
{
    int n;
    cout << "no of elements" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// time O(N LOG N)
// space O(N) = extra space