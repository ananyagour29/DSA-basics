#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    // fole ko open krna
    fin.open("zooom.txt");
    char c;
    c = fin.get();
    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    };
    fin.close();
}