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
        long long n, minA = INT_MAX, minB = minA;
        long long sumA = 0, sumB = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sumA += x;
            minA = min(x, minA);
        }
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sumB += x;
            minB = min(x, minB);
        }
        long long minR = sumA + n * minB, minC = sumB + n * minA;
        cout << min(minR, minC) << endl;
    }
    return 0;
}