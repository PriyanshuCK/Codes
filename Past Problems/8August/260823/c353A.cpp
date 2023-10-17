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
    int n;
    cin >> n;
    int ox = 0, oy = 0, o2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if ((x % 2 == 0 && y % 2 != 0))
        {
            oy++;
        }
        if ((x % 2 != 0 && y % 2 == 0))
        {
            ox++;
        }
        if (x % 2 != 0 && y % 2 != 0)
        {
            o2++;
        }
    }
    int o = o2 % 2 == 0 ? ox % 2 + oy % 2 : ox + oy;
    if (((o != 0 && o2 != 0) && ((o % 2 != 0 || o2 % 2 != 0) && (o + (o2 % 2)) % 2 == 0)) || ((o == 0 && (o2 % 2) != 0) || (o2 % 2 == 0 && (o % 2) != 0)))
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << ((ox % 2 != 0 && oy % 2 != 0 && o2 % 2 != 0) ? 0 : ox % 2 + o2 % 2) << endl;
    }

    return 0;
}