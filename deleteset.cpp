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
    set<int>::iterator itr;
    for (itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << "\n";
    set1.erase(4);

    for (itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}