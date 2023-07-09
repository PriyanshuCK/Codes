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
        int n, m;
        cin >> n >> m;
        int a[n], b[m], sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumA += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sumB += b[i];
        }
        if (sumA > sumB)
        {
            cout << "Tsondu" << endl;
        }
        else if (sumA < sumB)
        {
            cout << "Tenzing" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}