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
    string s;
    cin >> s;
    int flag = 1;
    for (size_t i = 1; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] -= 32;
            }
            else if (s[i] <= 90)
            {
                s[i] += 32;
            }
        }
    }

    cout << s << endl;
    return 0;
}