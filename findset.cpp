#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    if (set1.find(9) != set1.end())
    {
        cout << "value present" << "\n";
    }
    else
    {
        cout << "not present";
    }
    return 0;
}
