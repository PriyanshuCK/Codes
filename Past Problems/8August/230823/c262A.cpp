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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    for (auto &&i : v)
    {
        int countI = 0;
        while (i)
        {
            if (i % 10 == 4 || i % 10 == 7)
            {
                countI++;
            }
            if (countI > k)
            {
                break;
            }
            i /= 10;
        }
        if (countI <= k)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}