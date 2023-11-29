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
    int n, mWin = 0, cWin = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            mWin++;
        }
        else if (m < c)
        {
            cWin++;
        }
    }
    if (mWin > cWin)
    {
        cout << "Mishka" << endl;
    }
    else if (cWin > mWin)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}