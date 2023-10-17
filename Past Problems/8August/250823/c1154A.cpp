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
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    int temp = z;
    z = max(z, max(w, max(x, y)));
    if (z != temp)
    {
        if (max(w, max(x, y)) == w)
        {
            w = temp;
        }
        else if (max(w, max(x, y)) == x)
        {
            x = temp;
        }
        else
        {
            y = temp;
        }
    }

    int c = z - w, a = x - c, b = y - c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}