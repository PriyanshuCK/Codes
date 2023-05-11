// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0)
    {
        cout << "Not a moose" << endl;
    }
    else
    {
        if (l == r)
        {
            cout << "Even " << 2 * l << endl;
        }
        else if (l < r)
        {
            cout << "Odd " << 2 * r << endl;
        }
        else
        {
            cout << "Odd " << 2 * l << endl;
        }
    }

    return 0;
}