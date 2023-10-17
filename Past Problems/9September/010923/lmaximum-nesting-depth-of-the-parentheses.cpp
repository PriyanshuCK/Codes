// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int maxDepth(string s)
{
    int count = 0, maxCount = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            count++;
            maxCount = max(maxCount, count);
        }
        if (s[i] == ')')
        {
            count--;
        }
    }
    return maxCount;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << maxDepth(s) << endl;
    return 0;
}