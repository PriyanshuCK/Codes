// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    vector<string> names;
    string order = "INCREASING";
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }
    if (names[0] > names[1])
    {
        order = "DECREASING";
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (order == "INCREASING")
        {
            if (names[i] > names[i + 1])
            {
                order = "NEITHER";
                break;
            }
        }
        if (order == "DECREASING")
        {
            if (names[i] < names[i + 1])
            {
                order = "NEITHER";
                break;
            }
        }
    }
    cout << order << endl;
    return 0;
}