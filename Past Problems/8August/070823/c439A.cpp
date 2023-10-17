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
    int n, d, sum = 0;
    cin >> n >> d;
    vector<int> time;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        time.push_back(x);
        sum += x;
    }
    if (d - (sum + 10 * (n - 1)) < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (2 * (n - 1)) + (d - (sum + 10 * (n - 1))) / 5 << endl;
    }

    return 0;
}