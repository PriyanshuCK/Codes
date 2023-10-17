// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string largestOddNumber(string s)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pos = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        string str(1, s[i]);
        if (stoi(str) % 2 != 0)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        return "";
    }
    s.erase(pos + 1, s.size() - pos - 1);
    return s;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << largestOddNumber(s) << endl;
    return 0;
}