// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int g, s, c;
    cin >> g >> s >> c;
    int value = 3 * g + 2 * s + 1 * c;
    if (value >= 8)
    {
        cout << "Province or Gold" << endl;
    }
    else if (value >= 6)
    {
        cout << "Duchy or Gold" << endl;
    }
    else if (value >= 5)
    {
        cout << "Duchy or Silver" << endl;
    }
    else if (value >= 3)
    {
        cout << "Estate or Silver" << endl;
    }
    else if (value >= 2)
    {
        cout << "Estate or Copper" << endl;
    }
    else
    {
        cout << "Copper" << endl;
    }

    return 0;
}