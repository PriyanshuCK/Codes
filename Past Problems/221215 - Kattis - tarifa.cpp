// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int x, n, data = 0;
    cin >> x >> n;
    while (n--)
    {
        int p;
        cin >> p;
        data += x - p;
    }
    cout << data + x << endl;
    return 0;
}