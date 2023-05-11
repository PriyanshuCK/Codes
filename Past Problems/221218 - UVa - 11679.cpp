// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int b, n;
    while (cin >> b >> n, b || n)
    {
        int flag = 1;
        vector<int> reserves;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            reserves.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int d, c, v;
            cin >> d >> c >> v;
            reserves[d - 1] -= v;
            reserves[c - 1] += v;
        }
        for (int i = 0; i < b; i++)
        {
            if (reserves[i] < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "S" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}