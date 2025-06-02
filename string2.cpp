#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str1 = "hello";
    int n = str1.length();
    int st = 0;
    int en = n - 1;
    while (st < en)
    {
        swap(str1[st], str1[en]);
        st++;
        en--;
    }
    cout << str1 << endl;
    return 0;
}
//  string str = "hello world";
//     reverse(str.begin(), str.end());
//     cout << str << endl;