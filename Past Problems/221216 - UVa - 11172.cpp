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
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "<" << endl;
        }
        else if (a > b)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}