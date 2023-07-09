// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void revStr(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    cout << s[s.length() - 1];
    s.pop_back();
    return revStr(s);
}
int main()
{
    string s;
    cin >> s;
    revStr(s);
    return 0;
}