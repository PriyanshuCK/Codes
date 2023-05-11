// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    unordered_map<char, int> hash;
    for (int i = 0; i < 5; i++)
    {
        string str;
        cin >> str;
        hash[str[0]]++;
    }
    int maxim = INT_MIN;
    for (auto x : hash)
    {
        if (x.second > maxim)
        {
            maxim = x.second;
        }
    }
    cout << maxim << endl;
    return 0;
}