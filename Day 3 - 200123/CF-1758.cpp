// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, rev;
        cin >> s;
        rev = s;
        reverse(s.begin(), s.end());
        cout << rev << s << endl;
    }
    return 0;
}