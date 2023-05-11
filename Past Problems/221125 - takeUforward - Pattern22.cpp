// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// 666666
// 655555
// 654444
// 654333
// 654322
// 654321
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            cout << j << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << i << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << j << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << i << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}