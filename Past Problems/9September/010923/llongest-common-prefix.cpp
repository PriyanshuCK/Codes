// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string longestCommonPrefix(vector<string> &strs)
{
    string s;
    int pos = 0, flag = 1;
    while (flag)
    {
        char c = strs[0][pos];
        for (int i = 0; i < (int)(strs.size()); i++)
        {
            if (pos < (int)strs[i].size() && strs[i][pos] == c)
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        pos++;
        if (flag)
        {
            s.push_back(c);
        }
    }
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    vector<string> strs;
    while (cin >> s)
    {
        strs.push_back(s);
    }
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}