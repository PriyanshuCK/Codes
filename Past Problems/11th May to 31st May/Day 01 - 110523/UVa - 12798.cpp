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
    while (cin >> n >> m)
    {
        int count = 0;
        for (size_t i = 0; i < n; i++)
        {
            int product = 1;
            for (size_t j = 0; j < m; j++)
            {
                int k;
                cin >> k;
                product *= k;
            }
            if (product)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}