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
        int n, Max = INT_MIN;
        cin >> n;
        int x;
        cin >> x;
        int maxim = x, mini = x;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            Max = max(Max, max(maxim - x, mini - x));
            maxim = max(maxim, x);
            mini = min(mini, x);
        }
        cout << Max << endl;
    }
    return 0;
}