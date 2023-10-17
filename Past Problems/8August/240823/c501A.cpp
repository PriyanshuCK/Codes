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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = max((3 * a) / 10, a - (a / 250) * c), v = max((3 * b) / 10, b - (b / 250) * d);
    if (m > v)
    {
        cout << "Misha" << endl;
    }
    else if (v > m)
    {
        cout << "Vasya" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }

    return 0;
}