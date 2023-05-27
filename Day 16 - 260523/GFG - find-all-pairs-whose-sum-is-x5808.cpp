// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int, int>> result;
    set<pair<int, int>> resultSet;
    set<int> a, b;
    for (int i = 0; i < N; i++)
    {
        a.insert(A[i]);
    }
    for (int i = 0; i < M; i++)
    {
        b.insert(B[i]);
    }
    for (auto &&i : a)
    {
        if (b.find(X - i) != b.end())
        {
            resultSet.insert({i, *b.find(X - i)});
        }
    }
    for (auto &&i : b)
    {
        if (a.find(X - i) != a.end())
        {
            resultSet.insert({*a.find(X - i), i});
        }
    }
    for (auto &&i : resultSet)
    {
        result.push_back(i);
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