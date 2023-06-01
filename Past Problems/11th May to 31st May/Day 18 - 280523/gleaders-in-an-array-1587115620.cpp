// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> leaders(int a[], int n)
{
    vector<int> result;
    int leader = a[n - 1];
    result.push_back(leader);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= leader)
        {
            leader = a[i];
            result.push_back(leader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> result = leaders(a, n);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}