// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << (long long)floor((sqrt((8.0 * n + 1.0)) - 1.0) / 2.0) << endl;
    }
    return 0;
}