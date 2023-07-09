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
        int n, prev, next;
        cin >> n;
        cin >> prev;
        for (int i = 1; i < n; i++)
        {
            cin >> next;
            if (next != prev + 1)
            {
                cout << i + 1 << endl;
            }
            else
            {
                prev = next;
            }
        }
    }
    return 0;
}