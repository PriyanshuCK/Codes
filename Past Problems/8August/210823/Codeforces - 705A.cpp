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
    int n, temp;
    cin >> n;
    temp = (n - 1) / 2;
    while (temp)
    {
        cout << "I hate that I love that ";
        if (n % 2 == 0 && temp == 1)
        {
            cout << "I hate that ";
        }
        temp--;
    }
    if (n == 2)
    {
        cout << "I hate that I love it" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "I love it" << endl;
    }
    else
    {
        cout << "I hate it" << endl;
    }

    return 0;
}