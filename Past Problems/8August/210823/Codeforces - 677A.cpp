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
    int n, h;
    vector<int> v;
    cin >> n >> h;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int width = 0;
    for (size_t i = 0; i < n; i++)
    {
        width += (int)(ceil(v[i] / (float)h));
    }
    cout << width << endl;

    return 0;
}