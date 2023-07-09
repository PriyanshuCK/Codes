// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int, int>> result;
    sort(B, B + M);
    for (int i = 0; i < N; i++)
    {
        auto ptr = lower_bound(B, B + M, X - A[i]);
        int idx = ptr - B;
        if (B[idx] == X - A[i])
        {
            result.push_back({A[i], B[idx]});
        }
    }
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, x;
    cin >> n >> m >> x;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> result = allPairs(a, b, n, m, x);
    for (auto &&i : result)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}