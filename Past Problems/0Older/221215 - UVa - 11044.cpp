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
        int n, m;
        cin >> n >> m;
        cout << (long long)ceil((n - 2) / 3.0) * (long long)ceil((m - 2) / 3.0) << endl;
    }
    return 0;
}