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
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        if ((i * k - r) % 10 == 0 || (i * k) % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}