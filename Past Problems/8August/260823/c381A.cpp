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
    int s = 0, d = 0, first = 0, last = n - 1;
    while (first <= last)
    {
        if (v[first] >= v[last])
        {
            s += v[first];
            first++;
        }
        else
        {
            s += v[last];
            last--;
        }
        if (first > last)
        {
            break;
        }

        if (v[first] >= v[last])
        {
            d += v[first];
            first++;
        }
        else
        {
            d += v[last];
            last--;
        }
    }
    cout << s << " " << d << endl;

    return 0;
}