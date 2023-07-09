// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// Wrong Answer
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, d, h, a, b, f, g;
        cin >> w >> d >> h;
        cin >> a >> b >> f >> g;
        cout << h + min(min(b + g + abs(a - f), 2 * w - a - f + abs(b - g)), min(a + f + abs(b - g), 2 * d - b - g + abs(a - g))) << endl;
    }
    return 0;
}