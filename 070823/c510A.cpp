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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if ((((i + 1) / 2) % 2 != 0 && j == m - 1) || (((i + 1) / 2) % 2 == 0 && j == 0))
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}