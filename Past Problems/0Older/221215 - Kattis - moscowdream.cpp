// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (((a && b) && c != 0) && ((n >= 3) && (n <= a + b + c)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}