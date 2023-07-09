// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        float l, w, d, wt;
        cin >> l >> w >> d >> wt;
        if (((l <= 56 && w <= 45 && d <= 25) || ((l + w + d) <= 125)) && wt <= 7)
        {
            cout << 1 << endl;
            count++;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    cout << count << endl;
    return 0;
}