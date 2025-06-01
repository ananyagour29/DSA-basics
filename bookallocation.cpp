#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &books, int students, int &mid)
{
    int student = 1;
    long long pages = 0;
    for (int i = 0; i < books.size(); i++)
    {
        if (pages + books[i] <= mid)
        {
            pages += books[i];
        }
        else
        {
            student++;
            pages = books[i];
            if (student > students)
                return false;
        }
    }
    return true;
}
int sum(vector<int> &books)
{
    int summ = 0;
    for (int i = 0; i < books.size(); i++)
    {
        summ += books[i];
    }
    return summ;
}

int splitArray(vector<int> &books, int students)
{
    if (students > books.size())
        return -1;
    int lo = *max_element(books.begin(), books.end());
    int hi = sum(books);
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (isPossible(books, students, mid))
        {
            hi = mid - 1;
            ans = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> books = {25, 46, 28, 49, 24};
    int students = 4;

    cout << "Minimum Maximum Pages: " << splitArray(books, students) << endl;
    return 0;
}
