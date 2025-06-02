#include <iostream>
#include <algorithm>
using namespace std;
bool isAlpha(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool is_palindrome(string s)
{
    int n = s.length();
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        if (!isAlpha(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlpha(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            ;
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s); // to accept full line input

    if (is_palindrome(s))
    {
        cout << "It is a valid palindrome." << endl;
    }
    else
    {
        cout << "It is NOT a palindrome." << endl;
    }

    return 0;
}
