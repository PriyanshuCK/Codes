// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j);
        }
        for (int j = i; j > 1; j--)
        {
            cout << char(63 + j);
        }
        cout << endl;
    }
    return 0;
}