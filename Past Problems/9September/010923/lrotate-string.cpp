// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
bool rotateString(string s, string goal)
{
    int n = (int)s.size();
    if (s == goal)
    {
        return true;
    }
    for (int i = 0; i < s.size(); i++)
    {
        reverse(s.begin(), s.begin() + 1);
        reverse(s.begin(), s.begin() + n);
        reverse(s.begin(), s.begin() + n - 1);
        if (s == goal)
        {
            return true;
        }
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s, goal;
    cin >> s >> goal;
    cout << rotateString(s, goal) << endl;
    return 0;
}