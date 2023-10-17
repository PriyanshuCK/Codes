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
    int n, sumC = 0, sumI = 0, sumK = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int c, i, k;
        cin >> c;
        sumC += c;
        j++;
        if (j >= n)
        {
            break;
        }
        cin >> i;
        sumI += i;
        j++;
        if (j >= n)
        {
            break;
        }
        cin >> k;
        sumK += k;
    }
    int maxi = max({sumC, sumI, sumK});
    if (sumC == maxi)
    {
        cout << "chest" << endl;
    }
    else if (sumI == maxi)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}