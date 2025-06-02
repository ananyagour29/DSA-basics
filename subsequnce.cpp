// #include <iostream>
// #include <vector>
// using namespace std;
// void print(int index, vector<int> &arr, vector<int> &ds, int sum, int k)
// {
//     if (index == arr.size())
//     {
//         if (k == sum)
//         {
//             for (int val : ds)
//             {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     ds.push_back(arr[index]); // take
//     print(index + 1, arr, ds, sum + arr[index], k);
//     ds.pop_back();
//     print(index + 1, arr, ds, sum, k);
// }
// int main()
// {
//     vector<int> arr = {1, 2, 1};
//     int k = 2;
//     vector<int> ds;
//     print(0, arr, ds, 0, k);
//     return 0;
// }
// time O(2^N)
// space O(N)
#include <iostream>
#include <vector>
using namespace std;
bool print(int index, vector<int> &arr, vector<int> &ds, int sum, int k)
{
    if (index == arr.size())
    {
        if (k == sum)
        {
            return true;
        }
        return false;
    }

    ds.push_back(arr[index]); // take
    if (print(index + 1, arr, ds, sum + arr[index], k))
        return true;
    ds.pop_back();
    if (print(index + 1, arr, ds, sum, k))
        return true;
    // return false;
}
int main()
{
    vector<int> arr = {1, 2, 1, 2};
    int k = 4;
    vector<int> ds;
    if (print(0, arr, ds, 0, k))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}