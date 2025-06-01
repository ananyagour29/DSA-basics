#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    if (i >= j)
        return true;
    if (s[i] != s[j])
        return false;
    return isPalindrome(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s, 0, s.length() - 1) == true)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
