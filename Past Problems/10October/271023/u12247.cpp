// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int getValidCard(int a, int b, int c, int x, int y, int z)
{
    while (a == z || b == z || c == z || x == z || y == z)
    {
        z++;
    }
    if (z <= 52)
    {
        return z;
    }
    return -1;
}
int getSecondMax(int a, int b, int c)
{
    if (a == max({a, b, c}))
    {
        return max(b, c);
    }
    else if (b == max({a, b, c}))
    {
        return max(a, c);
    }
    return max(a, b);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c, x, y;
    while (cin >> a >> b >> c >> x >> y && a != 0)
    {
        int secMax = getSecondMax(a, b, c);
        if (min(x, y) > max({a, b, c}))
        {
            cout << getValidCard(a, b, c, x, y, 1) << endl;
        }
        else if (secMax < min(x, y))
        {
            cout << getValidCard(a, b, c, x, y, secMax + 1) << endl;
        }
        else if (max(x, y) > max({a, b, c}))
        {
            cout << getValidCard(a, b, c, x, y, max({a, b, c}) + 1) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}