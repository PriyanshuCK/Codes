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
    int count = 1;
    while (t--)
    {
        int l, w, h;
        cin >> l >> w >> h;
        cout << "Case " << count;
        if (l <= 20 && w <= 20 && h <= 20)
        {
            cout << ": good" << endl;
        }
        else
        {
            cout << ": bad" << endl;
        }
        count++;
    }
    return 0;
}