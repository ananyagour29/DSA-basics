#include <iostream>
// #include <cstring>
using namespace std;
// int main()
// {

//     char str[] = "hello";
//     cout << strlen(str) << endl; // constant pointers
// }
// CHARACTER ARRAYS
// int main()
// {
//     char str[100];
//     // cin >> str;
//     cin.getline(str, 100, '$');
//     cout << str;
//     return 0;
// }
int main()
{
    string str = "apna college";
    cout << str << endl;
    str = "apna ananaya";
    cout << str << endl;
    // concat
    string str1 = "hello";
    string str2 = "world";
    string str3 = str1 + str2;
    cout << str3 << endl;
    cout << (str1 == str2) << endl;
    cout << str1.length() << endl;
    return 0;
}