// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
// 8 min
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int findNum(int n, int a[])
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxi < a[i])
        {
            maxi = a[i];
        }
        if (a[i] < 0)
        {
            return a[i];
        }
    }
    return maxi;
}
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << findNum(n, a) << endl;
    }
    return 0;
}