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
    int a, b;
    cin >> a >> b;
    int wa = 0, wb = 0, d = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) > abs(b - i))
        {
            wb++;
        }
        else if (abs(a - i) < abs(b - i))
        {
            wa++;
        }
        else
        {
            d++;
        }
    }
    cout << wa << " " << d << " " << wb << endl;

    return 0;
}