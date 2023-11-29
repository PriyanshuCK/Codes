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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                a.push_back((i + 1) * 2);
            }
            for (int i = n / 2; i < (n * 3) / 4; i++)
            {
                a.push_back(((i - n / 2) + 1) * 2 - 1);
            }
            for (int i = (n * 3) / 4; i < n; i++)
            {
                a.push_back(((i - n / 2) + 1) * 2 + 1);
            }
            for (auto &&i : a)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}