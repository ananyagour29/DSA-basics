#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string> record;
    // record.insert(make_pair(1, "gfh"));
    record[1] = "hdf";
    record[2] = "gfg";

    for (auto pair : record)
    {
        cout << pair.first << "\n";
        cout << pair.second << "\n";
    }
    return 0;
}
//O(1)