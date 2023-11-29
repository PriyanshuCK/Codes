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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (b > a)
        {
            count++;
        }
        if (c > a)
        {
            count++;
        }
        if (d > a)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}