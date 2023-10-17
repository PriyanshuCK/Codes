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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int maxCount = 1, count = 1;
    for (size_t i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            count++;
        }
        else
        {
            maxCount = max(count, maxCount);
            count = 1;
        }
    }
    maxCount = max(count, maxCount);
    cout << maxCount << endl;
    return 0;
}