// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    size_t n;
    cin >> n;
    vector<string> names;
    vector<string> wish{
        "Happy",
        "birthday",
        "to",
        "you",
        "Happy",
        "birthday",
        "to",
        "you",
        "Happy",
        "birthday",
        "to",
        "Rujia",
        "Happy",
        "birthday",
        "to",
        "you",
    };
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        names.push_back(s);
    }
    for (size_t j = 0; j < (((n / 16) + 1) * 16); j++)
    {
        cout << names[(j % n)] << ": " << wish[(j % 16)] << endl;
    }
    return 0;
}